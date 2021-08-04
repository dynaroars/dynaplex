#include "testlib.h"

#include <asm/unistd.h>
#include <linux/perf_event.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <inttypes.h>
#include <assert.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<=(int)(b);i++)
#define REP(i,b) for(int i=0;i<(int)(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(int)(b);i--)
#define REPD(i,b) for(int i=(int)(b)-1;i>=0;i--)
template<typename T> inline bool mini(T &a, T b) {return b<a?a=b,true:false;}
template<typename T> inline bool maxi(T &a, T b) {return a<b?a=b,true:false;}

typedef unsigned long long ull;
typedef long long ll;

void depsiz(int dep, ll siz) {
    cout << dep << ';' << siz << '\n';
}

void sizcnt(ll siz, ll cnt) {
    cerr << siz << ';' << cnt << '\n';
}

bool traceOn = true;
bool useHwCounter = false;

int curRecDep = 0;
ll opCnt = 0;
vector<ll> opChild;
bool countOpAtAllDepths = false;

int perfFd = -1;

void OpCnt(ll inc = 1) {
    if(!traceOn) return;
    if(useHwCounter) return;
    opCnt += inc;
}

ll readHwCounter() {
    assert(perfFd != -1);
    ll count;
    int ret = read(perfFd, &count, sizeof(count));
    assert(ret == sizeof(count));
    return count;
}

void UpdateOpCnt() {
    if(!useHwCounter) return;
    ll cnt = readHwCounter();
    assert(cnt >= opCnt);
    opCnt = cnt;
}

struct RecTrace {
    ll _size = 0;
    ll _prevOpCnt = 0;
    int _dep = 0;

    RecTrace(ll siz) {
        if(!traceOn) return;
        UpdateOpCnt();

        _size = siz;
        _prevOpCnt = opCnt;
        _dep = ++curRecDep;
        opChild.push_back(0);

        depsiz(curRecDep, siz);
    }
    ~RecTrace() {
        if(!traceOn) return;
        UpdateOpCnt();

        ll totalOp = opCnt - _prevOpCnt;
        assert(totalOp >= 0);
        ll myOp = totalOp - opChild.back();
        assert(myOp >= 0);

        curRecDep--;
        opChild.pop_back();
        if(opChild.size()) opChild.back() += totalOp;

        if (countOpAtAllDepths || _dep == 1) {
            sizcnt(_size, myOp);
        }
    }
};

template<class T>
inline int sz(const T& v) { return int(v.size()); }

template<class T>
void rand_arr(T *arr, int sz, T from, T to) {
    REP(i,sz) arr[i] = rnd.next(from, to);
}

static long
perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
                int cpu, int group_fd, unsigned long flags)
{
    int ret;

    ret = syscall(__NR_perf_event_open, hw_event, pid, cpu,
                    group_fd, flags);
    return ret;
}

void init_perf() {
    struct perf_event_attr pe;
    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.config = PERF_COUNT_HW_INSTRUCTIONS;
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    // Don't count hypervisor events.
    pe.exclude_hv = 1;

    perfFd = perf_event_open(&pe, 0, -1, -1, 0);
    if(perfFd == -1) {
        printf("Please run as root to use hardware performance counter!\n");
        exit(1);
    }
    assert(perfFd >= 0);

    int ret;
    ret = ioctl(perfFd, PERF_EVENT_IOC_RESET, 0);
    assert(ret >= 0);
    ret = ioctl(perfFd, PERF_EVENT_IOC_ENABLE, 0);
    assert(ret >= 0);
}

bool envFlagOn(const char *key) {
    char *ptr = std::getenv(key);
    return ptr && strcmp(ptr, "1") == 0;
}

void ksh_init(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    countOpAtAllDepths = envFlagOn("KSH_ALL_DEPTHS");
    useHwCounter = envFlagOn("KSH_HW");
    if(useHwCounter) {
        init_perf();
    }
}

#include "testlib.h"
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

int curRecDep = 0;
ll *opCnt = nullptr;
bool countOpAtRootOnly = true;

struct RecTrace {
    ll _size = 0;
    ll _opCnt = 0;
    ll *_bakOpCnt = nullptr;
    int _dep = 0;

    RecTrace(ll siz) : _size(siz) {
        if(!traceOn) return;

        _dep = ++curRecDep;
        _bakOpCnt = opCnt;
        opCnt = &_opCnt;

        depsiz(curRecDep, siz);
    }
    ~RecTrace() {
        if(!traceOn) return;

        opCnt = _bakOpCnt;
        curRecDep--;

        if (!countOpAtRootOnly || _dep == 1) {
            sizcnt(_size, _opCnt);
        }
    }
};

void OpCnt(ll inc = 1) {
    if(!traceOn) return;
    (*opCnt) += inc;
}

template<class T>
inline int sz(const T& v) { return int(v.size()); }

template<class T>
void rand_arr(T *arr, int sz, T from, T to) {
    REP(i,sz) arr[i] = rnd.next(from, to);
}
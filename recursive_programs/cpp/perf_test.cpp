#include "kshlib.h"
#include <asm/unistd.h>
#include <linux/perf_event.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <assert.h>

#include <inttypes.h>

// static long
// perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
//                 int cpu, int group_fd, unsigned long flags)
// {
//     int ret;

//     ret = syscall(__NR_perf_event_open, hw_event, pid, cpu,
//                     group_fd, flags);
//     return ret;
// }

int
main(int argc, char **argv)
{
    ksh_init(argc, argv);
    struct perf_event_attr pe;
    long long count;
    int fd;

    uint64_t n;
    if (argc > 1) {
        n = strtoll(argv[1], NULL, 0);
    } else {
        n = 10000;
    }

    memset(&pe, 0, sizeof(struct perf_event_attr));
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.config = PERF_COUNT_HW_INSTRUCTIONS;
    pe.disabled = 1;
    pe.exclude_kernel = 1;
    // Don't count hypervisor events.
    pe.exclude_hv = 1;

    fd = perf_event_open(&pe, 0, -1, -1, 0);
    if (fd == -1) {
        fprintf(stderr, "Error opening leader %llx\n", pe.config);
        exit(EXIT_FAILURE);
    }

    ioctl(fd, PERF_EVENT_IOC_RESET, 0);
    ioctl(fd, PERF_EVENT_IOC_ENABLE, 0);

    vector<int> v = rnd.distinct<int>(n, 1e9);
    shuffle(v.begin(), v.end());
    sort(v.begin(), v.end());

    ioctl(fd, PERF_EVENT_IOC_DISABLE, 0);
    int ret = read(fd, &count, sizeof(count));
    assert(ret == sizeof(count));

    printf("Used %lld instructions\n", count);

    close(fd);
}

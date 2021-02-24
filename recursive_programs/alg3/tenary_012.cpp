#include "kshlib.h"

const int N = 100;
int a[N] = {};

void f(int k) {
    RecTrace _t(k);
    REP(i,3) {
        OpCnt();
        a[k] = i;
        if(a[k] == 0 && a[k+1] == 1 && a[k+2] == 2)
            continue;
        if(k-1 > 0)
            f(k-1);
    }
}

int main(int argc, char *argv[])
{
    ksh_init(argc, argv);

    int n = atoi(argv[1]);
    f(n);
}

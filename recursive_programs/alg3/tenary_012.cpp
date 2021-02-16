#include "kshlib.h"

const int N = 100;
int a[N] = {};

void f(int k) {
    RecTrace _t(k);
    if (k == 0) return;
    REP(i,3) {
        OpCnt();
        a[k] = i;
        if(a[i] == 0 && a[i+1] == 1 && a[i+2] == 2)
            continue;
        f(k-1);
    }
}

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    f(n);
}

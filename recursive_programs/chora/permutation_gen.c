#include "tick.h"

void gen_perm(int *a, int sz, int idx) {
    tick(1);
    if (sz == 1) {
        a[0] = 1;
        return;
    }

    int fac = 1;
    int i;
    for(i = 1; i < sz; i++) {
        tick(1);
        fac *= i;
    }

    int a0 = (idx/fac)+1;
    a[0] = a0;

    gen_perm(a+1, sz-1, idx - (a0-1)*fac);
    for(i = 1; i < sz; i++) {
        tick(1);
        if(a[i] >= a0) {
            a[i]++;
        }
    }

    return;
}

void main(int *a, int sz, int idx) {
    __VERIFIER_assume(sz > 0);
    init_tick(0);

    balanced_ternary(a, sz);
}

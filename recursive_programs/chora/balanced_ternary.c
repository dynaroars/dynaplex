#include "tick.h"

void balanced_ternary(int *a, int n) {
    tick(1);
    if (n == 0) {
        return;
    }

    int r = n % 3;
    int d = n / 3;
    if (r == 2) {
        r = -1;
        d++;
    }
    int c = (r == -1 ? 'Z' : r+'0');
    *a = c;

    balanced_ternary(a+1, d);
}

void main(int *a, int n) {
    __VERIFIER_assume(n > 0);
    init_tick(0);

    balanced_ternary(a, n);
}

// Adapted from: https://costa.fdi.ucm.es/pubs/examples.php
#include "tick.h"

void copy(int t_height) {
    __VERIFIER_assume(t_height >= 0);
    tick(1);
    int lc_height = __VERIFIER_nondet_int();
    __VERIFIER_assume(-1 <= lc_height && lc_height <= t_height - 1);
    int rc_height = __VERIFIER_nondet_int();
    __VERIFIER_assume(-1 <= rc_height && rc_height <= t_height - 1);
    __VERIFIER_assume(t_height == lc_height + 1 || t_height == rc_height + 1);

    if (lc_height >= 0) { copy(lc_height); }
    if (rc_height >= 0) { copy(rc_height); }
}

void main(int t_height) {
    init_tick(0);
    __VERIFIER_assume(t_height >= 0);

    copy(t_height);
}

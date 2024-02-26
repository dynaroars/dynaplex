// Adapted from: https://costa.fdi.ucm.es/pubs/examples.php
#include "tick.h"

int ack(int A, int B) {
    if (A == 0) { return B + 1; }
    if (A >= 1 && B == 0) { return ack(A-1,1); }
    if (A >= 1 && B >= 1) { return ack(A-1,ack(A,B-1)); }
    return 0;
}

void main(int A, int B) {
    init_tick(0);

    ack(A,B);
}

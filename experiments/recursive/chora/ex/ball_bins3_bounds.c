// Adapted from Kahn and Hoffmann 2019 working paper,
//   "Exponential Automatic Amortized Resource Analysis"
// We model list-manipulating code by abstracting lists to their lengths
#include "tick.h"

void helper(int xlen, int alen, int blen, int clen) {
    if (xlen == 0) { tick(1); return;}
    int tlen = xlen - 1;
    helper(tlen, alen+1,blen,clen);
    helper(tlen, alen,blen+1,clen);
    helper(tlen, alen,blen,clen+1);
}

void ball_bins3(int xlen) {
    helper(xlen, 0, 0, 0);
}

void main(int xlen) {
    init_tick(0);

    ball_bins3(xlen);
}

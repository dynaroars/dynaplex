// Copied from "chora/benchmarks/other/subsetsub_size_overview.c"
#define bool int
#define false 0
#define true 1
#include "tick.h"

bool found;
int subsetSumSize(int * A, int n) { found = false; return subsetSumSizeAux(A,0,n,0); }
int subsetSumSizeAux(int * A, int i, int n, int sum) {
    __cost++;
    if (i >= n) {
        if (sum == 0) { found = true; }
        return 0;
    }
    int size = subsetSumSizeAux(A,i+1,n,sum + A[i]); // add A[i]
    if (found) return size + 1;
    size = subsetSumSizeAux(A,i+1,n,sum); // skip A[i]
    return size;
}
void main(int n) {
    init_tick(0);
    int * A;
    __VERIFIER_assume(n >= 0);
    subsetSumSize(A,n); 
}

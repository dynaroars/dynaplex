#include "tick.h"

#define RANDOM_INCLUSIVE(L, H) __t = __VERIFIER_nondet_int(); \
                           __VERIFIER_assume(__t >= L && __t <= H)
#define SWAP_ELEMENTS(X,Y) __t=a[X]; a[X]=a[Y]; a[Y]=__t 
int length;

int partition(int *a, int low, int hi, int pivotIndex) {
    tick(1);
    int __t, pivot, i, j;
    if (hi - low < 2) return 0;

    SWAP_ELEMENTS(hi-1, pivotIndex);
   
    pivot = a[hi-1];
    
    i = low-1;
    for(j = low; j < hi-1; j++) {
        tick(1);
        if (a[j] <= pivot) {
            i = i+1;
            SWAP_ELEMENTS(i, j);
        }
    }

    SWAP_ELEMENTS(i+1,hi-1);

    return i;
}

int quick_select(int *a, int low, int hi, int k) {
    tick(1);
    int __t, pivotIndex, i;

    if (k > 0 && k <= hi-low) {
        pivotIndex = RANDOM_INCLUSIVE(low, hi-1);
        i = partition(a, low, hi, pivotIndex);
 
        if (i - low == k - 1)
            return a[pivotIndex];
 
        if (i - low > k - 1) 
            return kthSmallest(a, low, i+1, k);
 
        return kthSmallest(a, i+2, hi, k - i + low - 1);
    }
    return -1;
}

int main(int *a, int n, int k)
{
    init_tick(0);

    quick_select(a, 0, n, k);
    return 0;
}

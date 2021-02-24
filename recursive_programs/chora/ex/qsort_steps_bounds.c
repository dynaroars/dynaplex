#include "tick.h"

#define RANDOM_INCLUSIVE(L, H) __t = __VERIFIER_nondet_int(); \
                           __VERIFIER_assume(__t >= L && __t <= H)
#define SWAP_ELEMENTS(X,Y) __t=a[X]; a[X]=a[Y]; a[Y]=__t 
int length;

// Sort the subregion of a at index positions [low,hi)
void quicksort(int *a, int low, int hi) {
    int __t, pivot, pivotIndex, i, j;

    if (hi - low < 2) return;

    pivotIndex = RANDOM_INCLUSIVE(low, hi-1);
    
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
    
    quicksort(a, low, i+1);
    quicksort(a, i+2, hi);
}

int main(int argc)
{
    int * a;
    int i;
    init_tick(0);

    length = argc;
    __VERIFIER_assume(length > 0);

    a = malloc(length * sizeof(int));

    for (i = 0; i < length; i++)
        a[i] = __VERIFIER_nondet_int();
    quicksort(a, 0, length);
    return 0;
}

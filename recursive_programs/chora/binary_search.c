#include "tick.h"

int binary_search(int *a, int L, int R, int k) {
    tick(1);
    if (L > R) {
        return -1;
    }
    int m = (L + R) / 2;
    if (a[m] == k) {
        return m;
    } else if(a[m] < k) {
        return binary_search(a, m+1, R, k);
    } else {
        return binary_search(a, L, m-1, k);
    }
}

void main(int *a, int n, int k) {
    __VERIFIER_assume(n > 0);
    init_tick(0);

	int i;
	for (i = 1; i < n; i++) {
        __VERIFIER_assume(a[i-1] <= a[i]);
    }

    binary_search(a, 0, n-1, k);
}

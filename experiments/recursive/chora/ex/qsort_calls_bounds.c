// Copied from "chora/benchmarks/icrasuite/c4b/qsort.c"

/* Quicksort */
// C4B output: 1+2|[0,len]|

#include "tick.h"

void qsort(int *a, int lo, int hi) {
	tick(1);
	int m1, m2, n;

	if (hi - lo < 1)
		return;

	n = __VERIFIER_nondet_int();	 /* partition the array */
	__VERIFIER_assume(n > 0);
	__VERIFIER_assume(lo + n <= hi);

	m1 = n + lo;
	m2 = m1 - 1;

	qsort(a, m1, hi);
	qsort(a, lo, m2);
}

void start(int *a, int len) {
	qsort(a, 0, len);
}

int main(int len) 
{
	init_tick(0);
	
    __VERIFIER_assume(len >= 0);
    int *a;
    a = malloc(len * sizeof(int));
	int i;
	for (i = 0; i < len; i++) a[i] = __VERIFIER_nondet_int();

	start(a, len);
	return 0;
}

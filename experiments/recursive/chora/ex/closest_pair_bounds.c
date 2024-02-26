// Adapted from "Non-Polynomial Worst-Case Analysis of Recursive Programs"
//   by Krishnendu Chatterjee, Hongfei Fu, and Amir Kafshdar Goharshady, 
//   in TOPLAS'19
#include "tick.h"

void clst_pair_main(int *aA, int *aB, int pi, int pj, int *aRes)
{
	__VERIFIER_assume(pi>=1 && pj >= pi);
	int *aC = (int*)malloc((pj-pi+1)*sizeof(int));	
	int *aD = (int*)malloc((pj-pi+1)*sizeof(int));	
	copy(aA, pi, aC, pi, pj - pi + 1);
	copy(aB, pi, aD, pi, pj - pi + 1);
	int *aTa = (int*)malloc((pj-pi+1)*sizeof(int));	
	int *aTb = (int*)malloc((pj-pi+1)*sizeof(int));	
	mergesort(aA, aB, pi, pj, aTa, aTb);
	mergesort(aD, aC, pi, pj, aTa, aTb);
	clst_pair(aA, aB, pi, pj, aC, aD, aTa, aTb, aRes);
}


void clst_pair(int *aA, int *aB, int pi, int pj, int *aC, int *aD, int *aTa, int *aTb, int *aRes)
{
	__VERIFIER_assume(pi>=1 && pj >= pi);
	if(1<=pi && pi<=pj-3)
	{
		int pk = pi + (pj - pi + 1)/2 - 1;
	        int *aR1 = (int*)malloc(sizeof(int));	
	        int *aR2 = (int*)malloc(sizeof(int));	
		clst_pair(aA, aB, pi, pk, aC, aD, aTa, aTb, aR1);
		clst_pair(aA, aB, pk + 1, pj, aC, aD, aTa, aTb, aR2);

		int p = 1;
		if(aR1[p]>=aR2[p])
			aRes[p] = aR1[p];
		else
			aRes[p] = aR2[p];

		fetch_and_scan(aA, aB, pi, pj, aC, aD, aTa, aTb, aRes);
		
	}
	else
	  base_clstpair(aA, aB, pi, pj, aRes);
}

void fetch_and_scan(int *aA, int *aB, int pi, int pj, int *aC, int *aD, int *aTa, int *aTb, int *aRes)
{
	int pl = pi;
	int pk=pi+(pj-pi+1)/2-1;
	int pn=pk+1;
	int pp = pi;
	
	while(pp<=pj)
	{
		if(aA[pk]+aA[pn]-2*aRes[1] <= 2 * aC[pl] && 2*aC[pl] <= aA[pk] + aA[pn] + 2 * aRes[1])
		{
			aTa[pl] = aC[pl];
			aTb[pl] = aD[pl];
			pl=pl+1;
		}
		pp = pp+1;
	}

	if(pl>=pi+1)
	{
		pp = pi;
		
		while(pp<=pl-1)
		{
			int pm = pp + 1;
			
			while(pm-pp<=7 && pm<=pl-1)
			{
				compare(aTa, aTb, pp, pm, aRes);
				pm = pm+1;
			}
			pp=pp+1;
		}
	}
}




void base_clstpair(int *aA, int *aB, int pi, int pj, int *aRes)
{
	__VERIFIER_assume(pi>=1 && pj >= pi);
	aRes[1] = 0-1;
	if(pi<=pj && pj<=pi);
	else
		if(pi+1<=pj && pj<=pi+1)
			  compare(aA, aB, pi, pj, aRes);
		else
		{
			int pk = pi + 1;
			compare(aA, aB, pi, pk, aRes);
			compare(aA, aB, pi, pj, aRes);
			compare(aA, aB, pk, pj, aRes);
		}
}

void compare(int *aA, int *aB, int pi, int pj, int *aRes)
{
	__VERIFIER_assume(pi>=1 && pj >= pi);
        tick(1);
	if(aRes[1] >= (aA[pi]-aA[pj])*(aA[pi]-aA[pj]) + (aB[pi]-aB[pj])*(aB[pi]-aB[pj]) || aRes[1]<=0-1)
	aRes[1] = (aA[pi]-aA[pj]) * (aA[pi]-aA[pj]) + (aB[pi]-aB[pj]) * (aB[pi]-aB[pj]);
}


void copy(int *aA, int pbeginA, int *aB, int pbeginB, int plen)
{
	__VERIFIER_assume(plen >= 1);
	int pi = 1;
	
	while(pi<=plen)
	{
		tick(1);
		int pj = pi + pbeginA - 1;
		int pk = pi + pbeginB - 1;
		aB[pk] = aA[pj];
		pi = pi+1;
	}
}

void mergesort(int *aA, int *aB, int pi, int pj, int *aTa, int *aTb)
{
	__VERIFIER_assume(pi>=1 && pi <= pj);
	if(1<=pi && pi<=pj-1)
	{
		int pk = pi + (pj-pi+1)/2 - 1;
		mergesort(aA, aB, pi, pk, aTa, aTb);
		mergesort(aA, aB, pk+1, pj, aTa, aTb);
		merge(pi, pj, pk, aA, aB, aTa, aTb);
	}
}

void merge(int pi, int pj, int pk, int *aA, int *aB, int *aTa, int *aTb)
{
	__VERIFIER_assume(pi >=1 && pj >= pk && pk >= pi);	
	int pm = pi;
	int pn = pk + 1;
	int pl = pi;
	
	while(pl <= pj)
	{
        tick(1);
		if(aA[pm]<=aA[pn])
		{
			;
			;
			pm = pm + 1;
		}
		else
		{
			;
			;
			pn = pn + 1;
		}
		pl = pl+1;
	}
	pl = pi;
	
	
	while(pl <= pj)
	{
		tick(1);
		aA[pl] = aTa[pl];
		aB[pl] = aTb[pl];
		pl = pl + 1;
	}
}

void main(int i, int j){
  init_tick(0);
  __VERIFIER_assume(j>=i);
  int *a = (int*)malloc(i*sizeof(int));
  int *b = (int*)malloc(j*sizeof(int));
  int *res = (int*)malloc(2*sizeof(int));
  clst_pair_main(a, b, i, j, res);
}

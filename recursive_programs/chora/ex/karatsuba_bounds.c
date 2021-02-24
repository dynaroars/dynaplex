// Copied from "chora/benchmarks/case_studies/karatsuba.c"
#include <stdio.h>
#include "tick.h"

#define BASE 10

int compareMag(int size, int *x, int *y){
  int i;
  for (i = size - 1; i>=0; i--){
    if (x[i] > y[i]) return -1;
    else if (x[i] < y[i]) return 1;
  }
  return 0;
}

int add(int size, int xsign, int ysign, int *x, int *y, int *res) {
    __VERIFIER_assume(size>=0);
    if (xsign == ysign){
      int carry = 0;
      int j;
      for (j=0; j<size; j++) {
        int val = x[j] + y[j] + carry;
        res[j] = val % BASE;
        carry = val / BASE;
      }
      return xsign;
    } else {
      int cmp = compareMag(size, x, y);
      if (cmp == 0) {
        int i; 
        for (i=0; i<size; i++){
          res[i] = 0;
        }
        return 1;
      }
      else if (cmp < 0){
        int borrow = 0;
        int i;
        for (i=0; i<size; i++){
          if (borrow + x[i] < y[i]){
            res[i] = BASE + borrow + x[i] - y[i];
            borrow = -1;
          } else {
            res[i] = borrow + x[i] - y[i];
            borrow = 0;
          }
        }
        return xsign;
      }
      else {
        int borrow = 0;
        int i;
        for (i=0; i<size; i++){
          if (borrow + y[i] < x[i]){
            res[i] = BASE + borrow + y[i] - x[i];
            borrow = -1;
          } else {
            res[i] = borrow + y[i] - x[i];
            borrow = 0;
          }
        }
        return ysign;
      }
    }
}


void split(int *x, int *xhi, int *xlo, int n){
  int i;
  for (i=0; i<n; i++){
    xlo[i] = x[i];
    xhi[i] = x[i+n/2];
  }
}

void karatsuba(int n, int * x, int * y, int * res){
  __VERIFIER_assume(n>=0);
  if (n==1){
    int val = x[0]*y[0];
    res[0] = val % BASE;
    res[1] = val / BASE;
    tick(1);
    return;
  }
  int m = n/2;

  int *c0 = (int *)malloc(n * sizeof(int));
  int *c1 = (int *)malloc(n * sizeof(int));
  int *c2 = (int *)malloc(n * sizeof(int));

  int *xhi = (int *)malloc(m * sizeof(int));
  int *xlo = (int *)malloc(m * sizeof(int));
  int *yhi = (int *)malloc(m * sizeof(int));
  int *ylo = (int *)malloc(m * sizeof(int));
  split(x, xhi, xlo, n);
  split(y, yhi, ylo, n);

  int *xsub = (int *)malloc(m * sizeof(int));
  int *ysub = (int *)malloc(m * sizeof(int));

  int signx = add(m, 1, -1, xlo, xhi, xsub);
  int signy = add(m, 1, -1, ylo, yhi, ysub);


  karatsuba(m, xlo, ylo, c0);
  karatsuba(m, xsub, ysub, c1);
  karatsuba(m, xhi, yhi, c2);


  int *temp = (int *)malloc(n * sizeof(int));
  add(n, 1, 1, c0, c2, temp);
  int *z1s = (int *)malloc(n * sizeof(int));
  add(n, 1, -1 * signx * signy, temp, c1, z1s);

  int resSize = 2*n;
  int *z0 = (int *)malloc(resSize * sizeof(int));
  int *z1 = (int *)malloc(resSize * sizeof(int));
  int *z2 = (int *)malloc(resSize * sizeof(int));
  int i;
  for (i=0; i<resSize; i++){
    if (i < m){
      z0[i] = c0[i];
      z1[i] = 0;
      z2[i] = 0;
    } else if (m<=i && i < n) {
      z0[i] = c0[i];
      z1[i] = z1s[i-m];
      z2[i] = 0;
    } else if (n<=i && i < n+m){
      z0[i] = 0;
      z1[i] = z1s[i-m];
      z2[i] = c2[i-n];
    } else {
      z0[i] = 0;
      z1[i] = 0;
      z2[i] = c2[i-n];
    }
  }
  int *temp2 = (int *)malloc(resSize *sizeof(int));
  add(resSize, 1, 1, z0, z1, temp2);
  add(resSize, 1, 1, temp2, z2, res);
  return;
}


int main (int N){
  init_tick(0);
  int *x = (int*)malloc(N*sizeof(int));
  int *y = (int*)malloc(N*sizeof(int));
  int *result = (int*)malloc(2*N*sizeof(int));
  karatsuba(N, x, y, result);

  return 0;
}

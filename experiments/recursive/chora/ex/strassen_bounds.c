// Adapted from "Non-Polynomial Worst-Case Analysis of Recursive Programs"
//   by Krishnendu Chatterjee, Hongfei Fu, and Amir Kafshdar Goharshady, 
//   in TOPLAS'19
#include "tick.h"
#include <stdlib.h>
#include <stdio.h>

//void print_matrix(int length, char* name, int **x){
//  int i, j;
//  for (i = 0; i<length; i++){
//    for (j = 0; j<length; j++){
//      printf("%s[%d][%d] = %d\n", name, i, j, x[i][j]);
//    }
//  }
//  printf("\n");
//}

void add_matrix(int size, int **x, int **y, int **res, int sub) {
  int i, j;
  for (i = 0; i<size; i++){
    for (j = 0; j<size; j++){
      if (sub) res[i][j] = x[i][j] - y[i][j];
      else res[i][j] = x[i][j] + y[i][j];
      __cost++;
    }
  }
}

void split_matrix(int size, int **x, int **x00, int **x01, int **x10, int **x11){
  int m = size/2;
  int i, j;
  for (i=0; i<size; i++){
    for (j=0; j<size; j++){
      if (i<m){
        if (j<m) x00[i][j] = x[i][j];
        else x01[i][j-m] = x[i][j];
      } else {
        if (j<m) x10[i-m][j] = x[i][j];
        else x11[i-m][j-m] = x[i][j];
      }
    }
  }
  return;
}

void strassen(int n, int **x, int **y, int **res) {
  int i,j;
  __VERIFIER_assume(n >= 0);
  int cutoff_len = 3;
  if (n <= cutoff_len) {
    __cost += cutoff_len*cutoff_len*cutoff_len;
   if (n==1){
     res[0][0] = x[0][0] * y[0][0];
   }
   else if (n==2){
      res[0][0] = x[0][0]*y[0][0] + x[0][1]*y[1][0];
      res[0][1] = x[0][0]*y[0][1] + x[0][1]*y[1][1];
      res[1][0] = x[1][0]*y[0][0] + x[1][1]*y[1][0];
      res[1][1] = x[1][0]*y[0][1] + x[0][1]*y[1][1];
    }
    return;
  }
  int m = n / 2;
  int** x00; int** x01; int** x10; int** x11; int** y00; int** y01; int** y10; int** y11; int** a1; int** a2; int** a3; int** a4; int** a5; int** a6; int** a7;
  int** t1; int** t2;
  int** c00; int** c01; int** c10; int** c11;
  x00 = (int **)malloc(m*sizeof(int*));
  x01 = (int **)malloc(m*sizeof(int*));
  x10 = (int **)malloc(m*sizeof(int*));
  x11 = (int **)malloc(m*sizeof(int*));
  y00 = (int **)malloc(m*sizeof(int*));
  y01 = (int **)malloc(m*sizeof(int*));
  y10 = (int **)malloc(m*sizeof(int*));
  y11 = (int **)malloc(m*sizeof(int*));
  t1 = (int **)malloc(m*sizeof(int*));
  t2 = (int **)malloc(m*sizeof(int*));
  c00 = (int **)malloc(m*sizeof(int*));
  c01 = (int **)malloc(m*sizeof(int*));
  c10 = (int **)malloc(m*sizeof(int*));
  c11 = (int **)malloc(m*sizeof(int*));
  a1 = (int **)malloc(m*sizeof(int*));
  a2 = (int **)malloc(m*sizeof(int*));
  a3 = (int **)malloc(m*sizeof(int*));
  a4 = (int **)malloc(m*sizeof(int*));
  a5 = (int **)malloc(m*sizeof(int*));
  a6 = (int **)malloc(m*sizeof(int*));
  a7 = (int **)malloc(m*sizeof(int*));
  for (i=0; i<m;i++){
    x00[i] = (int *)malloc(m*sizeof(int));
    x01[i] = (int *)malloc(m*sizeof(int));
    x10[i] = (int *)malloc(m*sizeof(int));
    x11[i] = (int *)malloc(m*sizeof(int));
    y00[i] = (int *)malloc(m*sizeof(int));
    y01[i] = (int *)malloc(m*sizeof(int));
    y10[i] = (int *)malloc(m*sizeof(int));
    y11[i] = (int *)malloc(m*sizeof(int));
    t1[i] = (int *)malloc(m*sizeof(int));
    t2[i] = (int *)malloc(m*sizeof(int));
    c00[i] = (int *)malloc(m*sizeof(int));
    c01[i] = (int *)malloc(m*sizeof(int));
    c10[i] = (int *)malloc(m*sizeof(int));
    c11[i] = (int *)malloc(m*sizeof(int));
    a1[i] = (int *)malloc(m*sizeof(int));
    a2[i] = (int *)malloc(m*sizeof(int));
    a3[i] = (int *)malloc(m*sizeof(int));
    a4[i] = (int *)malloc(m*sizeof(int));
    a5[i] = (int *)malloc(m*sizeof(int));
    a6[i] = (int *)malloc(m*sizeof(int));
    a7[i] = (int *)malloc(m*sizeof(int));
  }
  split_matrix(n, x, x00, x01, x10, x11);
  split_matrix(n, y, y00, y01, y10, y11);

  add_matrix(m, x00, x11, t1, 0);
  add_matrix(m, y00, y11, t2, 0);
  strassen(m, t1, t2, a1);
  add_matrix(m, x10, x11, t1, 0);
  strassen(m, t1, y00, a2);
  add_matrix(m, y01, y11, t1, 1);
  strassen(m, x00, t1, a3);
  add_matrix(m, y10, y00, t1, 1);
  strassen(m, x11, t1, a4);
  add_matrix(m, x00, x01, t1, 0);
  strassen(m, t1, y11, a5);
  add_matrix(m, x10, x00, t1, 1);
  add_matrix(m, y00, y01, t2, 0);
  strassen(m, t1, t2, a6);
  add_matrix(m, x01, x11, t1, 1);
  add_matrix(m, y10, y11, t2, 0);
  strassen(m, t1, t2, a7);

  add_matrix(m, a1, a4, t1, 0);
  add_matrix(m, t1, a5, t2, 1);
  add_matrix(m, t2, a7, c00, 0);

  add_matrix(m, a3, a5, c01, 0);
  add_matrix(m, a2, a4, c10, 0);

  add_matrix(m, a1, a2, t1, 1);
  add_matrix(m, t1, a3, t2, 0);
  add_matrix(m, t2, a6, c11, 0);

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if (i < m && j < m) res[i][j] = c00[i][j];
      else if (i <m && j >= m) res[i][j] = c01[i][j-m];
      else if (i >= m && j < m) res[i][j] = c10[i-m][j];
      else res[i][j] = c11[i-m][j-m];
    }
  }
  return;
}

void main(int length, int **x, int **y, int **res) {
  init_tick(0);
  __VERIFIER_assume(length >= 0);
//  int i, j;
//  int length = 4;
//  int** x = (int **)malloc(length * sizeof(int*));
//  int** y = (int **)malloc(length * sizeof(int*));
//  int** res = (int **)malloc(length * sizeof(int*));
//  for (i = 0; i< length; i++){
//    x[i] = (int *)malloc(length * sizeof(int));
//    y[i] = (int *)malloc(length * sizeof(int));
//    res[i] = (int *)malloc(length * sizeof(int));
//  }
//  x[0][0] = 1;
//  x[0][1] = 2;
//  x[0][2] = 3;
//  x[0][3] = 4;
//  x[1][0] = 5;
//  x[1][1] = 6;
//  x[1][2] = 7;
//  x[1][3] = 8;
//  x[2][0] = 9;
//  x[2][1] = 10;
//  x[2][2] = 11;
//  x[2][3] = 12;
//  x[3][0] = 13;
//  x[3][1] = 14;
//  x[3][2] = 15;
//  x[3][3] = 16;
//  
//  y[0][0] = 1;
//  y[0][1] = 2;
//  y[0][2] = 3;
//  y[0][3] = 4;
//  y[1][0] = 5;
//  y[1][1] = 6;
//  y[1][2] = 7;
//  y[1][3] = 8;
//  y[2][0] = 9;
//  y[2][1] = 10;
//  y[2][2] = 11;
//  y[2][3] = 12;
//  y[3][0] = 13;
//  y[3][1] = 14;
//  y[3][2] = 15;
//  y[3][3] = 16;
//
  strassen(length, x, y, res);
  return;
}

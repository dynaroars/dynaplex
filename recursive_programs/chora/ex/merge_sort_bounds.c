// Copied from "chora/benchmarks/case_studies/working_merge_sort.c"
#ifdef TRYME
#include "stdio.h"
#include "stdlib.h"
#else
//#include "chora_pow_log_helpers.h"
#endif

int __cost = 0;

void merge_sort(int * arr, int * scratch, int len);
void insertion_sort(int * arr, int lo, int hi);
void split_merge(int * src, int lo, int hi, int * dest);
void copy_array(int * src, int lo, int hi, int * dest);

void insertion_sort(int * arr, int lo, int hi) {
  for(int sorted = 1; sorted < hi-lo; sorted++) {
    for(int pos = sorted; pos > 0; pos--) {
      __cost++;
      if (arr[lo+pos-1] < arr[lo+pos]) { break; }
      int tmp = arr[lo+pos]; arr[lo+pos] = arr[lo+pos-1]; arr[lo+pos-1] = tmp;
    }
  }
}
void copy_array(int * src, int lo, int hi, int * dest) {
  for(int k = lo; k < hi; k++) { dest[k] = src[k]; }
}
void split_merge(int * src, int lo, int hi, int * dest) {
  int mid = lo + ((hi - lo) / 2);
  if (hi-lo == 2 || hi-lo == 3) {
    copy_array(src, lo, hi, dest);
    insertion_sort(dest, lo, hi);
    return;
  }
  split_merge(dest, lo, mid, src);
  split_merge(dest, mid, hi, src);
  int i = lo;
  int j = mid;
  for(int k = lo; k < hi; k ++) {
    __cost++;
    if (i < mid && (j >= hi || src[i] <= src[j])) {
      dest[k] = src[i];
      i = i + 1;
    } else {
      dest[k] = src[j];
      j = j + 1;
    }
  }
}
void merge_sort(int * arr, int * scratch, int len) {
  if (len <= 1) return;
  copy_array(arr, 0, len, scratch);
  split_merge(scratch, 0, len, arr);
}

#ifdef TRYME

// The following is the executable harness for merge_sort
int main(int argc, char ** argv) {
  int len = argc - 1;
  int * myArray = (int*)malloc(len*sizeof(int));
  int * scratch = (int*)malloc(len*sizeof(int));
  if (len <= 0) { 
    printf("Usage: %s <list of integers>\n",argv[0]);
    printf("  Sort some integers.\n");
    return 0; 
  }
  if (myArray == 0) return -1;
  for(int i = 0; i < len; i++) {
    myArray[i] = atoi(argv[i+1]);
  }
  merge_sort(myArray, scratch, len);
  for(int i = 0; i < len; i++) {
    printf("%d%c",myArray[i],i==len-1?'\n':' ');
  }
}

#else

// The following is the analyzer harness for merge_sort
void main(int len, int * myArray, int * scratch) {
  merge_sort(myArray, scratch, len);

  //int logLen = log2_helper(len);
  //__VERIFIER_assert((len <= 0 || __cost < 3*(len + len*logLen)));
}

#endif

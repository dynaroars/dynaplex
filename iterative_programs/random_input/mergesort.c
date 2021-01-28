#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAXTEMPSIZE 1000

void mergesort(int arr[], int n, int *counter) {
  int temp[MAXTEMPSIZE];
  int size;
  int l1, l2, h1, h2, k, i, j;
  for (size = 1; size < n; size = size * 2) {
    *counter = *counter + 1;
    l1 = 0;
    k = 0;
    while (l1 + size < n) {
      *counter = *counter + 1;
      h1 = l1 + size - 1;
      l2 = h1 + 1;
      h2 = l2 + size - 1;
      if (h2 >= n) h2 = n - 1;
      i = l1;
      j = l2;

      while (i <= h1 && j <= h2) {
        *counter = *counter + 1;
        if (arr[i] <= arr[j])
          temp[k++] = arr[i++];
        else
          temp[k++] = arr[j++];
      }

      while (i <= h1){
        *counter = *counter + 1;
        temp[k++] = arr[i++];
      }
      while (j <= h2){
        *counter = *counter + 1;
        temp[k++] = arr[j++];
      }
      l1 = h2 + 1;
    }
    for (i = l1; k < n; i++){
      *counter = *counter + 1;
      temp[k++] = arr[i];
    }
    for (i = 0; i < n; i++){
      *counter = *counter + 1;
      arr[i] = temp[i];
    }
  }
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int main(int argc, char * argv[]) {
  int counter = 0;
  int num;
  time_t t;

  opendir("mergesort");
  if (ENOENT == errno) {
      mkdir("mergesort", 0777);
  }

  FILE *file;
  file = fopen("mergesort/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 100; i++) {
    num = rand() % MAXTEMPSIZE;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%30000;
    }

    mergesort(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }

  fclose(file);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#define uint unsigned int

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void heap_sort(int a[], uint len, int *counter) {
  /* heap sort */
  uint half;
  uint parents;

  if (len <= 1) return;
  half = len >> 1;
  for (parents = half; parents >= 1; --parents) {
    *counter = *counter + 1;
    int tmp;
    int level = 0;
    uint child;

    child = parents;
    /* bottom-up downheap */

    /* leaf-search for largest child path */
    while (child <= half) {
      *counter = *counter + 1;
      ++level;
      child += child;
      int comparison = (a[child] > a[child - 1]) ? 1 : (a[child] < a[child - 1]) ? -1 : 0;
      if ((child < len) && (comparison > 0))
        ++child;
    }
    /* bottom-up-search for rotation point */
    tmp = a[parents - 1];
    for (;;) {
      *counter = *counter + 1;
      if (parents == child) break;
      int comparison = (tmp > a[child - 1]) ? 1 : (tmp < a[child - 1]) ? -1 : 0;
      if (comparison <= 0) break;
      child >>= 1;
      --level;
    }
    /* rotate nodes from parents to rotation point */
    for (; level > 0; --level) {
      *counter = *counter + 1;
      a[(child >> level) - 1] = a[(child >> (level - 1)) - 1];
    }
    a[child - 1] = tmp;
  }

  --len;
  do {
    *counter = *counter + 1;
    int tmp;
    int level = 0;
    uint child;

    /* move max element to back of array */
    tmp = a[len];
    a[len] = a[0];
    a[0] = tmp;

    child = parents = 1;
    half = len >> 1;

    /* bottom-up downheap */

    /* leaf-search for largest child path */
    while (child <= half) {
      *counter = *counter + 1;
      ++level;
      child += child;
      int comparison = (a[child] > a[child - 1]) ? 1 : (a[child] < a[child - 1]) ? -1 : 0;
      if ((child < len) && (comparison > 0))
        ++child;
    }
    /* bottom-up-search for rotation point */
    for (;;) {
      *counter = *counter + 1;
      if (parents == child) break;
      int comparison = (tmp > a[child - 1]) ? 1 : (tmp < a[child - 1]) ? -1 : 0;
      if (comparison <= 0) break;
      child >>= 1;
      --level;
    }
    /* rotate nodes from parents to rotation point */
    for (; level > 0; --level) {
      *counter = *counter + 1;
      a[(child >> level) - 1] = a[(child >> (level - 1)) - 1];
    }
    a[child - 1] = tmp;
  } while (--len >= 1);
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("heapsort");
  if (ENOENT == errno) {
      mkdir("heapsort", 0777);
  }

  FILE *file;
  file = fopen("heapsort/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 100; i++) {
    num = rand() % 500;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%3000;
    }

    heap_sort(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return 0;
}

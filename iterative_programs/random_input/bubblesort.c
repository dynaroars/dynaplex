#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void bubble_sort(int list[], int n, int *counter) {
  int c, d, t;

  for (c = 0; c < n - 1; c++) {
    for (d = 0; d < n - c - 1; d++) {
      if (list[d] > list[d + 1]) {
        *counter = *counter + 1;
        t = list[d];
        list[d] = list[d + 1];
        list[d + 1] = t;
      }
    }
  }
}


int cmpfunc (const int * a, const int * b) {
   return *b - *a;
}

int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("bubble_sort");
  if (ENOENT == errno) {
      mkdir("bubble_sort", 0777);
  }

  FILE *file;
  file = fopen("bubble_sort/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 100; i++) {
    num = rand() % 500;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%3000;
    }
    bubble_sort(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return 0;
}

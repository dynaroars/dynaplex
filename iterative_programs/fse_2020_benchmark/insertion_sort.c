#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void insertion_sort(int list[], int count, int *counter) {
  int i, j, temp;
  for (i = 1; i < count; i++) {
    *counter = *counter + 1;
    temp = list[i];
    j = i - 1;
    while (temp < list[j] && j >= 0) {
      *counter = *counter + 1;
      list[j + 1] = list[j];
      j = j - 1;
    }
    list[j + 1] = temp;
  }

  return;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("insertion_sort");
  if (ENOENT == errno) {
      mkdir("insertion_sort", 0777);
  }

  FILE *file;
  file = fopen("insertion_sort/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 150; i++) {
    num = rand() % 1500;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%1000;
    }
    qsort(arr, num, sizeof(int), cmpfunc);
    insertion_sort(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void selection_sort(int list[], int count, int *counter) {
  int i, j, temp;
  for (i = 0; i < count; i++) {
    for (j = i + 1; j < count; j++) {
      if (list[i] > list[j]) {
        *counter = *counter + 1;
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
      }
    }
  }
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("selection_sort");
  if (ENOENT == errno) {
      mkdir("selection_sort", 0777);
  }

  FILE *file;
  file = fopen("selection_sort/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 150; i++) {
    num = rand() % 150;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%150;
    }

    selection_sort(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return 0;
}

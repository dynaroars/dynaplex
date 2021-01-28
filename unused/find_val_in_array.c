#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int find_first(int val, int array[], int size, int *counter) {
  for (int i = 0; i < size; ++i) {
    *counter = *counter + 1;
    if (array[i] == val) {
      return i;
    }
  }
  return -1;
}

int main() {
  int counter = 0;
  int num, term;
  time_t t;

  opendir("find_first");
  if (ENOENT == errno) {
      mkdir("find_first", 0777);
  }

  FILE *file;
  file = fopen("find_first/traces", "a");

  srand((unsigned) time(&t));
  int size;
  int j;
  for (size_t i = 0; i < 150; i++) {
    size = rand() % 150;
    int arr[num];
    for (j = 0; j < size; j++) {
        arr[j] = rand()%150;
    }
    num = rand() % 50;
    term = find_first(num, arr, size, &counter);
    fprintf(file, "%d;%d\n", size, counter);
  }
  fclose(file);
  return term;
}

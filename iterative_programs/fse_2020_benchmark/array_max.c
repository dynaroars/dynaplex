#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int largest_element(int arr[], int num, int *counter) {
  int i, max_element;
  max_element = arr[0];
  for (i = 1; i < num; i++){
    *counter = *counter + 1;
    if (arr[i] > max_element) max_element = arr[i];
  }
  return max_element;
}

int main() {
  int counter = 0;
  int num, term;
  time_t t;

  opendir("array_max");
  if (ENOENT == errno) {
      mkdir("array_max", 0777);
  }

  FILE *file;
  file = fopen("array_max/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 150; i++) {
    num = rand() % 150;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%150;
    }

    term = largest_element(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return term;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAXTEMPSIZE 500

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


int join(int arr[], int left[], int right[],
        int l, int m, int r)
{
    int i; // Used in second loop
    for (i = 0; i <= m - l; i++)
        arr[i] = left[i];

    for (int j = 0; j < r - m; j++)
        arr[i + j] = right[j];
}

// Function to store alternate elemets in left
// and right subarray
int split(int arr[], int left[], int right[],
        int l, int m, int r)
{
    for (int i = 0; i <= m - l; i++)
        left[i] = arr[i * 2];

    for (int i = 0; i < r - m; i++)
        right[i] = arr[i * 2 + 1];
}

// Function to generate Worst Case of Merge Sort
int generateWorstCase(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        // create two auxiliary arrays
        int left[m - l + 1];
        int right[r - m];

        // Store alternate array elements in left
        // and right subarray
        split(arr, left, right, l, m, r);

        // Recurse first and second halves
        generateWorstCase(left, l, m);
        generateWorstCase(right, m + 1, r);

        // join left and right subarray
        join(arr, left, right, l, m, r);
    }
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
        arr[j] = rand()%3000;
    }

    generateWorstCase(arr, 0, sizeof(arr) / sizeof(arr[0])); 
    mergesort(arr, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }

  fclose(file);

  return 0;
}

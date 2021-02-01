// An iterative implementation of quick sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>


// A utility function to swap two elements
 void swap(int* a, int* b)
 {
     int t = *a;
     *a = *b;
     *b = t;
}


/* This function is same in both iterative and recursive*/
int partition(int arr[], int l, int h, int *counter) 
{ 
    int x = arr[h]; 
    int i = (l - 1); 
  
    for (int j = l; j <= h - 1; j++) { 
        if (arr[j] <= x) { 
	    *counter = *counter + 1;
	    i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[h]); 
    return (i + 1); 
} 

void quickSortIterative(int arr[], int l, int h, int *counter)
{
    // Create an auxiliary stack
    int stack[h-l+1];

    // initialize top of stack
    int top = -1;

    // push initial values of l and h to stack
    stack[++top] = l;
    stack[++top] = h;

    // Keep popping from stack while is not empty
    while (top >= 0) {
        *counter = *counter + 1;
        // Pop h and l
        h = stack[top--];
        l = stack[top--];

        // Set pivot element at its correct position
        // in sorted array
        int p = partition(arr, l, h, counter);
        //int x = arr[h];
        //int i = (l - 1);

        if (p - 1 > l) { 
            stack[++top] = l; 
            stack[++top] = p - 1; 
        }
	
	// If there are elements on right side of pivot, 
        // then push right side to stack 
        if (p + 1 < h) { 
            stack[++top] = p + 1; 
            stack[++top] = h; 
        } 

    }
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("quicksort");
  if (ENOENT == errno) {
      mkdir("quicksort", 0777);
  }

  FILE *file;
  file = fopen("quicksort/traces", "a");
  srand((unsigned) time(&t));
  int j;
  for (size_t i = 0; i < 100; i++) {
    num = rand() % 500;
    int arr[num];
    for (j = 0; j < num; j++) {
        arr[j] = rand()%3000;
    }
    quickSortIterative(arr, 0, num-1, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return 0;
}

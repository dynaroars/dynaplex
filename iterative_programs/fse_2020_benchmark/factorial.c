#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int factorial( int N, int *counter )
{
  int product = 1;
  for ( int j=1; j<=N; j++ ){
    *counter = *counter + 1;
    product *= j;
  }
  return product;
}

int permutations(int n, int k, int *counter){
  *counter = *counter + 1;
  return factorial(n, counter)/factorial(n-k, counter);
}

int main() {
  int counter = 0;
  int num, k;
  time_t t;

  opendir("factorial");
  if (ENOENT == errno) {
      mkdir("factorial", 0777);
  }

  opendir("permutations");
  if (ENOENT == errno) {
      mkdir("permutations", 0777);
  }
  FILE *file;
  FILE *fptr;
  fptr = fopen("permutations/traces", "a");
  file = fopen("factorial/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 150; i++) {
    num = rand() % 20;
    k = rand() % 20;
    factorial(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
    permutations(num, k, &counter);
    fprintf(fptr, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  fclose(fptr);
  return 0;
}

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

int permutation(int n, int k, int *counter){
  int res = factorial(n, &counter)/ (factorial(n-k, &counter));
  return res;
}

int main() {
  int counter = 0;
  int num, k;
  time_t t;

  opendir("factorial");
  if (ENOENT == errno) {
      mkdir("factorial", 0777);
  }

  opendir("permutation");
  if (ENOENT == errno) {
      mkdir("factorial", 0777);
  }

  FILE *file;
  file = fopen("factorial/traces", "a");
  FILE *in;
  in = fopen("permutation/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 100; i++) {
    num = rand() % 100;
    k = rand() % num;
    factorial(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
    permutation(num, k, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  fclose(in);
  return 0;
}

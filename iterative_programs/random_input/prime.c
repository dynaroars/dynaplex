#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int check_prime(int n, int *counter) {
  int c;
  for (c = 2; c <= n - 1; c++) {
    *counter = *counter + 1;
    if (n % c == 0) return 0;
  }
  return 1;
}

int main() {
  int counter = 0;
  int num, term;
  time_t t;

  opendir("prime");
  if (ENOENT == errno) {
      mkdir("prime", 0777);
  }

  FILE *file;
  file = fopen("prime/traces", "a");

  srand((unsigned) time(&t));
  for (size_t i = 0; i < 150; i++) {
    num = rand() % 40000;
    term = check_prime(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    // printf("%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return term;
}

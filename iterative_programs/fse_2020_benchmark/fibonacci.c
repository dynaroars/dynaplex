#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int fib(int count, int *counter) {
  int first_term = 0;
  int second_term = 1;
  int next_term, i;
  for (i = 1; i <= count; i++) {
    *counter = *counter + 1;
    if (i <= 0)
      next_term = i;
    else {
      next_term = first_term + second_term;
      first_term = second_term;
      second_term = next_term;
    }
  }
  return next_term;
}

int main() {
  int counter = 0;
  int num, term;
  time_t t;

  opendir("fibonacci");
  if (ENOENT == errno) {
      mkdir("fibonacci", 0777);
  }

  FILE *file;
  file = fopen("fibonacci/traces", "a");

  srand((unsigned) time(&t));
  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 50;
    term = fib(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return term;
}

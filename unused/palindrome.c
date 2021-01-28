#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int palindrome(int num, int *counter) {
  int reverse_num = 0, remainder, temp;
  temp = num;
  while (temp != 0) {
    *counter = *counter + 1;
    remainder = temp % 10;
    reverse_num = reverse_num * 10 + remainder;
    temp /= 10;
  }
  return reverse_num == num;
}

int main() {
  int counter = 0;
  int num, term;
  time_t t;

  opendir("palindrome");
  if (ENOENT == errno) {
      mkdir("palindrome", 0777);
  }

  FILE *file;
  file = fopen("palindrome/traces", "a");

  srand((unsigned) time(&t));
  for (size_t i = 0; i < 150; i++) {
    num = rand() % 100000000;
    term = palindrome(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    // printf("%d;%d\n", num, counter);
    counter = 0;
  }
  fclose(file);
  return term;
}

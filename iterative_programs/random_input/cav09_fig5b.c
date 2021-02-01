#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int mainQ(int a, int n, int *counter){
     int x = 0;
     int y = a;
     int tCtr = 0;
     while(x < n){
	  y++;
	  x = x + y;
	  tCtr++;
    *counter = *counter + 1;
     }

     //dig2:  (y*y) - (a*a) - 2*x + y - a == 0, -x <= 0, n - x <= 0, t - y + a == 0, -y + a <= 0

     return 0;
}


int main() {
  int counter = 0;
  int a, n, size;
  time_t t;

  opendir("cav09_fig5b");
  if (ENOENT == errno) {
      mkdir("cav09_fig5b", 0777);
  }

  FILE *file;
  file = fopen("cav09_fig5b/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 100; i++) {
    n = rand() % 500;
    mainQ(rand()%500, n, &counter);
    fprintf(file, "%d;%d\n", n, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

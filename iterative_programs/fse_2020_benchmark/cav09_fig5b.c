#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace_post(int a, int n, int y, int x, int tCtr){}


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
     vtrace_post(a, n, y, x, tCtr);

     return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("cav09_fig5b");
  if (ENOENT == errno) {
      mkdir("cav09_fig5b", 0777);
  }

  FILE *file;
  file = fopen("cav09_fig5b/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 150; i++) {
    num = rand() % 100;
    mainQ(-num*num*num, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

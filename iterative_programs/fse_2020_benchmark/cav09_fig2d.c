#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>


int mainQ(int n, int m, int *counter){
    //these assertions are based on gulwani pldi fig 4_3
    //(same as cav fig 2a).
    int x = 0;
    int y = 0;
    int tCtr = 0;
    while(x < n){
	while (y < m){
	    y++;
	    tCtr++;
      *counter = *counter + 1;
	}
	y=0;
	x++;

    }
    //%%%traces: int n, int m, int t
    //dig2: -m <= -1, m*n - t == 0, m - n <= -1
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("cav09_fig2d");
  if (ENOENT == errno) {
      mkdir("cav09_fig2d", 0777);
  }

  FILE *file;
  file = fopen("cav09_fig2d/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 150; i++) {
    num = 1 + rand() % 100;
    mainQ(num+10, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

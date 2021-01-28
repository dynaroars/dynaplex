#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>


int mainQ(int n, int *counter){
    int x = 0;
    int y = 0;
    int tCtr = 0;
    while(x < n){
	y = x;
	while (y < n){
	    y++;
	    tCtr++;
      *counter = *counter + 1;
	}

	x=y+1;
    }
    //%%%traces: int n, int t
    //dig2:  n*t - (t*t) == 0, -t <= 0, n - t <= 0
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("cav09_fig3a");
  if (ENOENT == errno) {
      mkdir("cav09_fig3a", 0777);
  }

  FILE *file;
  file = fopen("cav09_fig3a/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 10000;
    mainQ(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

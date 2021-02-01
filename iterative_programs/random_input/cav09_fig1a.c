#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>


int mainQ(int m, int *counter){
    int x = 0;
    int y = 0;
    int tCtr = 0;
    while(x < 100){
	if (y < m){
	    y++;
	}
	else{
	    x++;
	}
	tCtr++;
  *counter = *counter + 1;
    }

    //dig2: m*t - (t*t) - 100*m + 200*t - 10000 == 0
    //solve for t: t == m + 100, t == 100
    return 0;
}


int main(int argc, char * argv[]) {
  int counter = 0;
  int num;
  time_t t;

  opendir("cav09_fig1a");
  if (ENOENT == errno) {
      mkdir("cav09_fig1a", 0777);
  }

  FILE *file;
  file = fopen("cav09_fig1a/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 100; i++) {
    num = rand() % 500;
    mainQ(num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

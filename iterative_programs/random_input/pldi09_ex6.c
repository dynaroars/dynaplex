#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int mainQ(int n, int m, int *counter){
    int i = 0;
    int j = 0;
    int k = 0;
    int tCtr = 0;

    while(i++ < n){
	tCtr++;
  *counter = *counter + 1;
	if (i % 2){//odd
	    while(j++ < m){
        tCtr++;
        *counter = *counter + 1;
      }
	}
	else{
	    while(k++ < m){
        tCtr++;
        *counter = *counter + 1;
      }
	}
    }
    //%%%traces: int n, int m, int i, int t
    //dig2: i - n - 1 == 0, -m - t <= 0, 2*m*n - n*t == 0, 2*m*t - (t*t) == 0, -i <= -1
    //NOTE: *** these equalities don't seem to capture the correct bound n+2m ? ***
    //Timos: This is because we haven't added a t++ for the outer loop. I suspect once we do that we will get what we want.
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("pldi09_ex6");
  if (ENOENT == errno) {
      mkdir("pldi09_ex6", 0777);
  }

  FILE *file;
  file = fopen("pldi09_ex6/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 10000;
    mainQ(num, rand()&10000, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

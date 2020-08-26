#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace(int n, int m, int i, int tCtr){}

int mainQ(int n, int m, int *counter){
    vassume (0 <= n);
    vassume (0 <= m);
    /* vassume (n <= 10); */
    /* vassume (m <= 10); */

    int i = 0;
    int j = 0;
    int k = 0;
    int tCtr = 0;

    while(i++ < n){
	//note remove if(nondet)
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
    vtrace(n, m, i, tCtr);
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

  for (size_t i = 0; i < 150; i++) {
    num = rand() % 100;
    mainQ(num, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

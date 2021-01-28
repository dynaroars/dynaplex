#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int mainQ(int n, int m, int * counter){
    int i = 0;
    int j = 0;
    int tCtr = 0;
    while(i<n){
	if (j < m) {
	    j++;
	}else{
	    j=0;
	    i++;
	}
	tCtr++;
  *counter = *counter + 1;
    }
    //%%%traces: int n, int m, int t
    //dig2: -m <= -1, m*n + n - t == 0, m - n <= -1

    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("pldi09_fig4_3");
  if (ENOENT == errno) {
      mkdir("pldi09_fig4_3", 0777);
  }

  FILE *file;
  file = fopen("pldi09_fig4_3/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 10000;
    mainQ(rand()%10000, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

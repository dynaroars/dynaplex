#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace(int n, int m, int tCtr){}

int mainQ(int n, int m, int *counter){
    vassume(m >= 0);
    int x = 0;
    int y = 0;
    int tCtr = 0;
    while(x < n){
	if(y < m){
	    y = y + 1;
	}
	else{
	    x = x + 1;
	}
	tCtr++;
  *counter = *counter + 1;
    }
    vtrace(n, m, tCtr);
    //%%%traces: int n, int m, int t
    //dig2:n - t <= 0, -t <= 0    nothing useful ??
    //NOTE: should we expect t = something here ?
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("popl09_fig4_1");
  if (ENOENT == errno) {
      mkdir("popl09_fig4_1", 0777);
  }

  FILE *file;
  file = fopen("popl09_fig4_1/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 10000;
    mainQ(num, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

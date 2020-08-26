#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace(int id, int n, int tCtr){}

int mainQ(int id, int n, int *counter){
    vassume(id >= 0);
    vassume(n > id);

    int tmp = id + 1;
    int tCtr = 0;

    while(tmp != id){
	if (tmp <= n) {
	    tmp = tmp + 1;
	}else{
	    tmp=0;
	}
	tCtr++;
  *counter = *counter + 1;
    }
    //%%%traces: int id, int n, int t
    //dig2: n - t + 1 == 0, -id <= 0, id - n <= -1
    vtrace(id, n, tCtr);
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("pldi09_fig4_1");
  if (ENOENT == errno) {
      mkdir("pldi09_fig4_1", 0777);
  }

  FILE *file;
  file = fopen("pldi09_fig4_1/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 150; i++) {
    num = rand() % 100;
    mainQ(num%26, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

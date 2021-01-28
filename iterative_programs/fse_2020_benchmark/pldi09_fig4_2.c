#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int mainQ(int n, int m, int *counter){
    int x = n;
    int y = 0;
    int tCtr = 0;
    while(x > 0){
	if (y < m) {
	    y++;
	    x--;
	}else{
	    y=0;
	}
	tCtr++;
  *counter = *counter + 1;
    }

    //%%%traces: int n, int m, int t, int x, int y
    //dig2: l23: -t + y <= 0, -m + y <= 0, x == 0, m*n - m*t + n - y == 0, x - y <= -1
    //Note: cannot find relationship among t and m,n  (annotated n+n/m)
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("pldi09_fig4_2");
  if (ENOENT == errno) {
      mkdir("pldi09_fig4_2", 0777);
  }

  FILE *file;
  file = fopen("pldi09_fig4_2/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = 1 + rand() % 10000;
    mainQ(num, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

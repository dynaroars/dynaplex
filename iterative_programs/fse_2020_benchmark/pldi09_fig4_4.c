#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace(int n, int m, int tCtr, int h){}

int mainQ(int n, int m, int *counter){
    vassume(m > 0);
    vassume(n > 0);
    vassume(m < 300);
    vassume(n < 300);

    int i = n;
    int tCtr = 0;
    int h = n/m;

    /* int h = 0; */
    /* while(m*h<=n){ */
    /* 	  h++; */
    /* } */
    /* h--; */
    while(i>0){
	if (i < m) {
	    i--;
	}else{
	    i = i-m;
	}
	tCtr++;
  *counter = *counter + 1;
    }

    vtrace(n, m, tCtr, h);

    /* assert(n%m==0); */

    /* int i = n; */
    /* int t = 0; */
    /* while(i>0){ */

    /* 	  if (i < m) { */
    /* 	       i--; */
    /* 	  }else{ */
    /* 	       i = i-m; */
    /* 	  } */
    /* 	  t++; */
    /* } */



    //%%%traces: int n, int m, int t, int h

    //dig2: l26: -c2 <= -1, c2*m - c2 - n + t == 0, c1 - m <= -1, -t <= -2, c1 + c2 - t == 0, c2 - t <= 0

    //Note: I got the above results which I think are right. But I have to manually pass in the flag -maxdeg 3  (i.e., DIG attempts to use maxdeg 4 automatically, but this requires many traces that it wasn't able to get).


    return 0;
}

int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("pldi09_fig4_4");
  if (ENOENT == errno) {
      mkdir("pldi09_fig4_4", 0777);
  }

  FILE *file;
  file = fopen("pldi09_fig4_4/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 150; i++) {
    num = 1 + rand() % 250;
    mainQ(num, 1+num%10, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

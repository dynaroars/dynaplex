#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace(int n, int m, int a, int b, int tCtr){}

int mainQ(int a, int b, int n, int m, int *counter){
    int x = a;
    int y = b;

    int tCtr = 0;
    while(x < n){
	while(y < m){
	    y = y + 1;
	    tCtr++;
      *counter = *counter + 1;
	}
	x = x + 1;
	tCtr++;
  *counter = *counter + 1;
    }
    vtrace(n, m, a, b, tCtr);

    //%%%traces: int n, int m, int a, int b, int t
    //   l17: -t <= 0, m*n*t + (n*n)*t - m*(t*t) - 2*n*(t*t) + (t*t*t) - m*t*a - 2*n*t*a + 2*(t*t)*a + t*(a*a) - n*t*b + (t*t)*b + t*a*b == 0
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("popl09_fig4_2");
  if (ENOENT == errno) {
      mkdir("popl09_fig4_2", 0777);
  }

  FILE *file;
  file = fopen("popl09_fig4_2/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 100; i++) {
    num = rand() % 500;
    mainQ(0, 0, num, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

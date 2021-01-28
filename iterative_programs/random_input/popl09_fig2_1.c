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
	if(y < m){
	    y++;
	}
	else{
	    x++;
	}
	tCtr++;
  *counter = *counter + 1;
    }
    vtrace(n, m, a, b, tCtr);

    //%%%traces: int n, int m, int a, int b, int t
    //NOTE: have to manually pass in the flag -maxdeg 3 (otherwise SAGE's eqt solver seems to hang).
    //dig2:  l17: m*n*t + (n*n)*t - m*(t*t) - 2*n*(t*t) + (t*t*t) - m*t*a - 2*n*t*a + 2*(t*t)*a + t*(a*a) - n*t*b + (t*t)*b + t*a*b == 0, -t <= 0
    //solve for t get:  [t == m + n - a - b, t == n - a, t == 0]
    //NOTE: *** are these results correct, better, etc than the given bound of Max(0, n-a) + Max(0, m-b)
    //Timos: I think they are better, because the bound Max(0, n-a) + Max(0, m-b) does not capture the case where a > n but y_0 < m.
    //Notice that in such a case, we will never enter the loop, which is captured by t==0, but the given bound in the paper will still be m-b.

    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("popl09_fig2_1");
  if (ENOENT == errno) {
      mkdir("popl09_fig2_1", 0777);
  }

  FILE *file;
  file = fopen("popl09_fig2_1/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 10000;
    mainQ(rand()%10000, rand()%10000, rand()%10000, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

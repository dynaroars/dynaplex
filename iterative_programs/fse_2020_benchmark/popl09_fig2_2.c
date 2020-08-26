#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace(int n, int a, int b, int tCtr){}

int mainQ(int a, int b, int n, int *counter){
     int x = a;
     int z = b;
     int tCtr = 0;
     while(x < n){
	  if(z > x){
	       x++;
	  }
	  else{
	       z++;
	  }
	  tCtr++;
    *counter = *counter + 1;
     }
     vtrace(n, a, b, tCtr);

     //dig2: 2*n^2*t - 3*n*t^2 + t^3 - 3*n*t*x0 + 2*t^2*x0 + t*x0^2 - n*t*z0 + t^2*z0 + t*x0*z0 == 0
     //solve for t got t == 2*n - x0 - z0, t == n - x0, t == 0
     //NOTE: *** are these results correct, better, etc than the given bound of Max(0, n-x0) + Max(0, n-z0)
     //Timos: Look at comment in Fig2_1.c. Same reasoning applies here.
     return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("popl09_fig2_2");
  if (ENOENT == errno) {
      mkdir("popl09_fig2_2", 0777);
  }

  FILE *file;
  file = fopen("popl09_fig2_2/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 150; i++) {
    num = rand() % 100;
    mainQ(num%11, num%9, num, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

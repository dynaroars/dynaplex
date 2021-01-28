#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

void vassume(int b){}
void vtrace_post(int n, int m, int tCtr){}

int mainQ(int n, int m, int *counter){
     vassume(m >= 0);
     vassume(n >= 0);
     int x = 0;
     int y = 0;
     int tCtr = 0;
     while(x < n){
	  y=0;
	  x++;
	  while(y < m){
	       y++;
	       tCtr++;
         *counter = *counter + 1;
	  }
          tCtr++;
          *counter = *counter + 1;
     }
     vtrace_post(n, m, tCtr);
     //%%%traces: int n, int m, int t
     //dig2: t>= 0
     //NOTE: *** why didn't I get anything useful here ?  should t = some function of n, m ?
     // Again, there is a t++ missing for the outer loop. I ran the corrected version on DIG1 and got m*n + n - t == 0 which looks correct.
     return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("popl09_fig4_4");
  if (ENOENT == errno) {
      mkdir("popl09_fig4_4", 0777);
  }

  FILE *file;
  file = fopen("popl09_fig4_4/traces", "a");
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

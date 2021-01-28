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
    int x = 0;
    int y = 0;
    int tCtr = 0;
    while((x < n || y < m)){
	if(x < n){
	    x++;
	    y++;
	}
	else if(y < m){
	    x++;
	    y++;
	}
	else{
	    //assert(0);
	    break;
	}
	tCtr++;
  *counter = *counter + 1;
    }
    vtrace(n, m, tCtr);

    //%%%traces: int n, int m, int t
    //dig2: m*n*t - m*(t*t) - n*(t*t) + (t*t*t) == 0, m - t <= 0, n - t <= 0, -t <= 0
    //solve for t : t == n, t == m, t == 0
    //NOTE: *** are the above correct ? there are 3 exact bounds as indicated for this?
    //Timos: This looks correct to me. A more correct bound would be Min(n,m)
    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("popl09_fig3_4");
  if (ENOENT == errno) {
      mkdir("popl09_fig3_4", 0777);
  }

  FILE *file;
  file = fopen("popl09_fig3_4/traces", "a");
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

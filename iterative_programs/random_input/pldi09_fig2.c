#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int mainQ(int M, int N, int P, int *counter){
    int tCtr = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < N){
	j = 0;
	while(j < M){
	    j = j + 1;
	    k = i;
	    tCtr++;
      *counter = *counter + 1;
	    while(k < P){
		k = k + 1;
		tCtr++;
    *counter = *counter + 1;
	    }
	    i = k;
	}
	i = i + 1;
	tCtr++;
  *counter = *counter + 1;
    }
    //dig2 invs:
    //l29: -N <= 0, -m <= 0, -n <= 0, n - t <= 0,
    //(N*N)*m*n + N*(m*m)*n - N*m*(n*n) - (m*m)*(n*n) - N*m*n*t + m*(n*n)*t + N*m*n - N*(n*n) - 2*m*(n*n) + N*n*t + m*n*t + (n*n)*t - n*(t*t) - (n*n) + n*t == 0, (N*N)*m*t + N*(m*m)*t - N*m*n*t - (m*m)*n*t - N*m*(t*t) + m*n*(t*t) + N*m*t - N*n*t - 2*m*n*t + N*(t*t) + m*(t*t) + n*(t*t) - (t*t*t) - n*t + (t*t) == 0

    /*
      N = 0 => t = 0
      N <= P (N-P <= 0) => t = P + M + 1
      N > P (-N+P < 0)  =>  t = N -M(P-N)  // -N +P < 0
    */

    return 0;
}


int main() {
  int counter = 0;
  int num;
  time_t t;

  opendir("pldi09_fig2");
  if (ENOENT == errno) {
      mkdir("pldi09_fig2", 0777);
  }

  FILE *file;
  file = fopen("pldi09_fig2/traces", "a");
  srand((unsigned) time(&t));

  for (size_t i = 0; i < 1000; i++) {
    num = rand() % 10000;
    mainQ(num, rand()%10000, rand()%10000, &counter);
    fprintf(file, "%d;%d\n", num, counter);
    counter = 0;

  }
  fclose(file);
  return 0;
}

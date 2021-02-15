#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int ack(int m, int n, int depth, FILE *file, int *counter)
{
    fprintf(file, "%d;%d\n", m, depth);
    if (m == 0){
        *counter = *counter + 1;
        return n+1;
    }
    else if((m > 0) && (n == 0)){
        *counter = *counter + 1;
        return ack(m-1, 1, depth+1, file, &counter);
    }
    else if((m > 0) && (n > 0)){
        *counter = *counter + 1;
        return ack(m-1, ack(m, n-1, depth+1, file, &counter), depth+1, file, &counter);
    }
}


int main(int argc, char * argv[]) {
  int counter = 0;
  int m=2, n=1, res;
  opendir("ackermann");
  if (ENOENT == errno) {
      mkdir("ackermann", 0777);
  }

  FILE *file;
  file = fopen("ackermann/traces", "a");
  FILE *in;
  char filename[50];
  sprintf(filename, "ackermann/output-%d-%d", m, n);
  printf("%s\n", filename);
  in = fopen(filename, "a");
  res = ack(m, n, 0, in, &counter);
  fprintf(file, "%d;%d\n", m, counter);
  counter = 0;
  fclose(in);
  fclose(file);
  return 0;
}

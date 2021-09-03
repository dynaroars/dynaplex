void rec_speed_pldi10_ex1(n, i, j){
    if(!(i<n)){
        return;
    }

    j=i+1;
    while (j<n) {
      if (nondet()>0) {
        j=j-1;
        n=n-1;
      }
      j=j+1;
    }
    i=i+1;
    
    return rec_speed_pldi10_ex1(n, i, j);
}

void speed_pldi10_ex1(int n){
  int i;
  int j;

  i=0;
  return rec_speed_pldi10_ex1(n, i, j);
}

int main(int n){
	speed_pldi10_ex1(n);
	return;
}

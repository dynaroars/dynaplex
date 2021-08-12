int nondet();

void rec_speed_popl10_simple_single(int n, int x){
  if(!(x<n)){
    return;
  }

  if (nondet()>0)
    x=x+1;
  else 
    x=x+1;

  return rec_speed_popl10_simple_single(n, x);
}

void speed_popl10_simple_single(int n){
  int x=0;
  return rec_speed_popl10_simple_single(n, x);
}

int main(int n) {
  speed_popl10_simple_single(n);
  return 0;
}

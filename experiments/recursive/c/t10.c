int nondet();

void rec_t10(int x, int y){
  if(!(x>y)){
    return;
  }

  if (nondet()>0)
    y=y+1;
  else
    x=x-1;

  return rec_t10(x, y);
}

int main(int x, int y) {
  rec_t10(x, y);
  return 0;
}

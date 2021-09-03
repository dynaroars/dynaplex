int nondet();

void rec_t13(int x, int y){
    if(!(x>0)){
        return;
    }

    x=x-1;
    if (nondet()>0) 
      y=y+1;
    else
      while (y > 0)
        y=y-1;
    return rec_t13(x, y);
}

int main(int x, int y){
	rec_t13(x, y);
	return;
}

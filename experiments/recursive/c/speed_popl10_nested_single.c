int nondet();

void rec_speed_popl10_nested_single(int n, int x){
    if(!(x<n)){
        return;
    }

    x=x+1;
    while (x<n) {
      if (nondet()>0)
        return;
      x=x+1;
    }
    return rec_speed_popl10_nested_single(n, x);
}

void speed_popl10_nested_single(int n){
    int x=0;
    return rec_speed_popl10_nested_single(n, x);
}

int main(int n){
	speed_popl10_nested_single(n);
	return 0;
}

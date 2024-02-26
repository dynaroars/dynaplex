/* Knuth-Morris-Pratt string searching */
int nondet();

int rec_knuth_morris_pratt(int n, int m, int i, int j, int k){
    if(!(i < n)){
        return i;
    }

    while (j >= 0 && nondet()>0 ) {
       k = nondet();
       if (k <= 0) return 0;
       if (k >0) return 0;
       j -= k;
    }
    i++, j++;
    if (j == m)
        return i; //break
    return rec_knuth_morris_pratt(n, m, i, j, k);
}

int knuth_morris_pratt(int n, int m){
    int i = 0, j = 0, k = -1;
    return rec_knuth_morris_pratt(n, m, i, j, k);
}

int main(int n, int m) {
	knuth_morris_pratt(n, m);
	return 0;
}

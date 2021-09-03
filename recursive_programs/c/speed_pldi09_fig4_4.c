void rec_peed_pldi09_fig4_4(int n, int m, int i){
  if(!(i>0)){
      return;
  }
  if (i < m) 
    i=i-1;
  else
    i=i-m;

  return rec_peed_pldi09_fig4_4(n, m, i);
}

void peed_pldi09_fig4_4(int n, int m){
  int i=n;

  if(0 >= m) return;
  return rec_peed_pldi09_fig4_4(n, m, i);
}

int main(int n, int m){
	peed_pldi09_fig4_4(n, m);
	return 0;
}

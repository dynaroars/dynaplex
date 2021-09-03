
int rec_t15(int x, int y, int z){
  if(!(x>y)){
    return 0;
  }
  x-=y+1;
  for (z=y; z>0; z--)
    /* nothing */;
  return rec_t15(x, y, z);
}

int t15(int x, int y){
    int z;
    if (y < 0) return 0;
    return rec_t15(x, y, z);
}

int main(int x, int y){
	t15(x, y);
	return 0;
}


int rec_foo(int x, int y){
    if(!(x >= 0)){
        return 0;
    }
    x = x - y;
    return rec_foo(x, y);
}

int foo(int x, int y){
    if (y > x){
      return rec_foo(x, y);
    }
    return 0;

}

int main(int x, int y){
	foo(x, y);
	return 0;
}



int rec_foo(int c, int n){
    if(!(c>0)){
        return 0;
    }

    if (n > 100) {
      n = n - 10;
      c = c - 1;
    } else {
      n = n + 11;
      c = c + 1;
    }
    return rec_foo(c, n);
}

int foo(int c, int n){
    c = 1;
    return rec_foo(c, n);
}

int main(int c, int n){
        foo(c, n);
        return 0;
} 

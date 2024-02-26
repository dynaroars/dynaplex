#include "kshlib.h"

ull mypow(ull a, ull b) {
    RecTrace _t(b);
    if(b == 0) return 1;
    ull t = mypow(a, b/2);
    if(b%2 == 1) return t*t*a;
    else return t*t;
}

int main(int argc, char *argv[]) {
    ksh_init(argc, argv);

    ll n = atoll(argv[1]);
    mypow(3, n);
}

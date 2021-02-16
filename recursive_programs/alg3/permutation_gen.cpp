#include "kshlib.h"

typedef vector<int> vi;

vi gen_perm(int sz, ull idx) {
    RecTrace _t(sz);
    if (sz == 1) return {1};

    ull fac = 1;
    FOR(i,1,sz-1) {
        OpCnt();
        fac *= i;
    }

    int a0 = (idx/fac)+1;
    vi res = {a0};

    vi tail = gen_perm(sz-1, idx - (a0-1)*fac);
    for(int t : tail) {
        OpCnt();
        if(t >= a0) t++;
        res.push_back(t);
    }

    return res;
}

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    ull fac = 1;
    FOR(i,1,n) fac *= i;
    ull idx = rnd.next(0ull, fac - 1);

    // // expected: 14 5 1 11 3 17 7 10 9 18 8 15 12 13 16 6 2 4 19
    // vi r = gen_perm(19, 84664226611467805ull-1);
    // for(int a : r) cout << a << ' ';

    gen_perm(n, idx);
}

#include "kshlib.h"

typedef vector<int> vi;

ull perm_index(int *a, int sz) {
    RecTrace _t(sz);
    if(sz == 1) return 0;

    ull fac = 1;
    FOR(i, 1, sz-1) {
        OpCnt();
        fac *= ull(i);
    }

    REP(i, sz) {
        OpCnt();
        if(a[i] > a[0]) a[i]--;
    }

    // cout << sz << "  " << a[0] << "  " << fac << "\n";
    return ull(a[0]-1)*fac + perm_index(a+1, sz-1);
}

int main(int argc, char *argv[])
{
    ksh_init(argc, argv);

    int n = atoi(argv[1]);
    vi a = rnd.perm(n);
    REP(i,n) a[i]++;
    // // expected 46013709489888347
    // vi a {8, 4, 9, 5, 11, 13, 17, 2, 7, 19, 6, 10, 16, 1, 18, 12, 15, 14, 3};

    perm_index(a.data(), sz(a));
}

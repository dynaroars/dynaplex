#include "kshlib.h"

const int N = int(1e5);

typedef vector<int> vi;

int n;
vi tree[5 * N];
int a[N];

vi merge(const vi &a, const vi &b) {
    vi r;
    int i = 0, j = 0;
    while(i < sz(a) || j < sz(b)) {
        OpCnt();
        int va = (i < sz(a) ? a[i] : INT_MAX);
        int vb = (j < sz(b) ? b[j] : INT_MAX);
        if(va < vb) r.push_back(va), i++;
        else r.push_back(vb), j++;
    }
    return r;
}

void build_tree(int x, int L, int R) {
    RecTrace _t(R-L+1);

    if (L == R) {
        tree[x].push_back(a[L]);
        return;
    }
    int m = (L + R) / 2;
    build_tree(2*x  , L  , m);
    build_tree(2*x+1, m+1, R);
    tree[x] = merge(tree[2*x], tree[2*x+1]);
}

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    n = atoi(argv[1]);
    FOR(i,1,n) a[i] = rnd.next(0, int(1e6));
    build_tree(1, 1, n);
}
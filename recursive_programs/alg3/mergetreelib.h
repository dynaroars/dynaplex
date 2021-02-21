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
        int va = (i < sz(a) ? a[i] : INT_MAX);
        int vb = (j < sz(b) ? b[j] : INT_MAX);
        if(va < vb) r.push_back(va), i++;
        else r.push_back(vb), j++;
    }
    return r;
}

void build_tree(int x, int L, int R) {
    if (L == R) {
        tree[x].push_back(a[L]);
        return;
    }
    int m = (L + R) / 2;
    build_tree(2*x  , L  , m);
    build_tree(2*x+1, m+1, R);
    tree[x] = merge(tree[2*x], tree[2*x+1]);
}

void visit_mem(int x, int L, int R) {
    RecTrace _t(R-L+1);
    OpCnt(sz(tree[x]));
    if (L == R) return;
    int m = (L + R) / 2;
    visit_mem(2*x  , L  , m);
    visit_mem(2*x+1, m+1, R);
}

int bin(const vi &a, int k) {
    int L = 0, R = sz(a)-1;
    int res = 0;
    while(L <= R) {
        OpCnt();
        int m = (L+R)/2;
        if(a[m] >= k) R = m-1, res = m;
        else L = m+1;
    }
    return res;
}

int query(int x, int L, int R, int u, int v, int k) {
    if(R<u || L>v) return 0; //out of range

    RecTrace _t(R-L+1);
    if(u<=L && R<=v) return bin(tree[x], k);

    int m = (L+R) / 2;
    return query(2*x  , L  , m, u, v, k)
        +  query(2*x+1, m+1, R, u, v, k);
}

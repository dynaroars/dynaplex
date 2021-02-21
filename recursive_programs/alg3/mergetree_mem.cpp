#include "mergetreelib.h"

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    n = atoi(argv[1]);
    FOR(i,1,n) a[i] = rnd.next(0, int(1e6));

    traceOn = false;
    build_tree(1, 1,n);
    traceOn = true;

    visit_mem(1, 1,n);
}
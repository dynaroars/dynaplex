#include "mergetreelib.h"

int main(int argc, char *argv[]) {
    ksh_init(argc, argv);

    n = atoi(argv[1]);
    FOR(i,1,n) a[i] = rnd.next(0, int(1e6));
    build_tree(1, 1, n);
}
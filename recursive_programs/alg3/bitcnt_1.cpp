#include "kshlib.h"

/* +++Date last modified: 05-Jul-1997 */

/*
**  Bit counter by Ratko Tomic
*/

// #include "bitops.h"

int bit_count(long x)
{
        RecTrace _t(x);
        int n = 0;
/*
** The loop will execute once for each bit of x set, this is in average
** twice as fast as the shift/test method.
*/
        if (x) {
            do {
                OpCnt();
                n++;
            } while (0 != (x = x&(x-1)));
        }
        return(n);
}




int main(int argc, char *argv[]) {
    ksh_init(argc, argv);

    ll n = atoll(argv[1]);
    bit_count(n);
}

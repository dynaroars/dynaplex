#include "kshlib.h"

string balancedTernary(ll n) {
    if (n == 0) return "";
    RecTrace _t(n);

    int r = n % 3;
    n = n / 3;
    if (r == 2) {
        r = -1;
        n++;
    }
    char c = (r == -1 ? 'Z' : r+'0');

    return balancedTernary(n) + c;
}

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    ll n = atoll(argv[1]);

    // inp 34324344324  --> 1010ZZZ101010Z101ZZ1000
    balancedTernary(n);
}

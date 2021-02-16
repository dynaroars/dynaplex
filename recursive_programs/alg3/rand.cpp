#include "testlib.h"

typedef long long ll;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    if(argc < 3) {
        std::cerr << "invalid arguments\n";
        return 1;
    }
    ll from = atoll(argv[1]);
    ll to = atoll(argv[2]);
    int cnt = (argc >= 4 ? atoi(argv[3]) : 1);

    std::vector<ll> res = rnd.distinct(cnt, from, to);
    std::sort(res.begin(), res.end());

    for(auto v : res)
        std::cout << v << '\n';
}
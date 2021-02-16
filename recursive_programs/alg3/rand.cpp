#include "testlib.h"

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    if(argc < 3) {
        std::cerr << "invalid arguments\n";
        return 1;
    }
    long long from = atoll(argv[1]);
    long long to = atoll(argv[2]);
    std::cout << rnd.next(from, to);
}
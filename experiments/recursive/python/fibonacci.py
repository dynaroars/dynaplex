#!/usr/bin/env python3

import random
import os
import sys

counter = 0

def fibonacci(n, depth, file):
    if depth==0:
        global counter
        counter = counter + 1
    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)

    if n<2:
        return n
    else:
        return fibonacci(n-2, depth+1, file) + fibonacci(n-1, depth+1, file)

if __name__ == '__main__':
    sys.setrecursionlimit(4000)
    for i in range(100):
        n = random.randint(3,10)
        depth = 0

        path = "./fibonacci"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./fibonacci/output-{}".format(n)
        fibonacci(n, depth, file)
        with open("./fibonacci/traces", 'a') as f:
            print("{};{}".format(n, counter), file=f)
        counter = 0

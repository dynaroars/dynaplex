#!/usr/bin/env python3

import random
import os

def factorial(n, depth, file):
    with open(file, 'a') as f:
        print("{};1;{}".format(depth, n), file=f)
    if n==0:
        return 1
    else:
        return n * factorial(n-1, depth+1, file)

if __name__ == '__main__':
    n = random.randint(0,20)
    depth = 0
    path = "./factorial"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./factorial/output-{}".format(n)
    factorial(n, depth, file)

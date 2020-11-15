#!/usr/bin/env python3
from math import floor, sqrt
import random
import os

counter = 0
try:
    long
except NameError:
    long = int

def fac(n, depth, file):
    global counter
    with open(file, 'a') as f:
        print("{};1;{}".format(depth, len(str(n))), file=f)

    step = lambda x: 1 + (x<<2) - ((x>>1)<<1)
    maxq = long(floor(sqrt(n)))
    d = 1
    q = 2 if n % 2 == 0 else 3
    while q <= maxq and n % q != 0:
        q = step(d)
        d += 1
        counter = counter + 1
    return [q] + fac(n // q, depth+1, file) if q <= maxq else [n]

if __name__ == '__main__':
    for i in range(500):
        n = random.randint(1, 100000000000000)
        path = "./decomposition"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./decomposition/output-{}".format(n)
        res = fac(n, 0, file)
        with open("./decomposition/traces", 'a') as f:
            print("{};{}".format(len(str(n)), counter), file=f)
        counter = 0

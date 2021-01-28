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
        print("{};{}".format(depth, n), file=f)
    
    if n==1:
        return
    for i in range(n):
        fac(n-1, depth+1, file)
    fac(n-1, depth+1, file)

if __name__ == '__main__':
    for i in range(10):
        n = random.randint(1, 10)
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

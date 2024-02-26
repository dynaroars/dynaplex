#!/usr/bin/env python3

import random
import os
counter = 0
import sys


def hanoi(n , source, destination, auxiliary, depth, file):
    global counter
    if depth==0:
        counter = counter + 1
    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)

    if n==1:
        return
    hanoi(n-1, source, auxiliary, destination, depth+1, file)
    hanoi(n-1, auxiliary, destination, source, depth+1, file)

if __name__ == '__main__':
    sys.setrecursionlimit(4000)
    for i in range(100):
        n = random.randint(1,10)
        depth = 0
        path = "./hanoi"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./hanoi/output-{}".format(n)
        hanoi(n,'A','B','C', depth, file)
        with open("./hanoi/traces", 'a') as f:
            print("{};{}".format(n, counter), file=f)
        counter = 0

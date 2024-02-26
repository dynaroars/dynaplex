#!/usr/bin/env python3

import random
import os

counter = 0
def factorial(n, depth, file):
    if depth==0:
        global counter
        counter = counter + 1

    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)
    if n==0:
        return 1
    else:
        return n * factorial(n-1, depth+1, file)

if __name__ == '__main__':
    for i in range(100):
        n = random.randint(2,500)
        depth = 0
        path = "./factorial"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./factorial/output-{}".format(n)
        factorial(n, depth, file)
        with open("./factorial/traces", 'a') as f:
            print("{};{}".format(n, counter), file=f)
        counter = 0

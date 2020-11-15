#!/usr/bin/env python3

import os
import random
counter = 0

def loop(i, j, m, n, depth, file):
    # size = m if m>n else n
    global counter

    with open(file, 'a') as f:
        print("{};2;{}".format(depth, j), file=f) # what traces do I track with multivariate recursion
    if i>m:
        counter = counter + 1
        return
    elif j<= n:
        loop(i, j+1, m, n, depth+1, file)
        counter = counter + 1
    else:
        loop(i+1, 0, m, n, depth+1, file)
        counter = counter + 1

if __name__ == '__main__':
    for i in range(200):
        m = n = random.randint(1,20)
        # n = random.randint(1,30)
        depth = 0
        path = "./recursive_loop"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./recursive_loop/output-{}-{}".format(m,n)
        loop(0,0,m,n,depth, file)
        with open("./recursive_loop/traces", 'a') as f:
            print("{};{}".format(m, counter), file=f)
        counter = 0

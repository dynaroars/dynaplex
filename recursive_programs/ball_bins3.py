#!/usr/bin/env python3

import random
import os

counter = 0

def helper(xlen, alen, blen, clen, depth, file):
    if depth==0:
        global counter
        counter = counter + 1
    with open(file, 'a') as f:
        print("{};{}".format(depth, xlen), file=f)

    if xlen == 0:
        return
    tlen = xlen - 1
    helper(tlen, alen+1, blen, clen, depth+1, file)
    helper(tlen, alen, blen+1, clen, depth+1, file)
    helper(tlen, alen, blen, clen+1, depth+1, file)

def ball_bins3(xlen, depth, file):
    helper(xlen, 0, 0, 0, depth, file)

def main():

    global counter
    xlen = random.randint(1,10)
    depth = 0

    path = "./ball_bins3"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./ball_bins3/output-{}".format(xlen)
    ball_bins3(xlen, depth, file)
    with open("./ball_bins3/traces", 'a') as f:
        print("{};{}".format(xlen, counter), file=f)
    counter = 0

if __name__ == '__main__':
    for i in range(10):
        main()

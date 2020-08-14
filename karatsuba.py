#!/usr/bin/env python3

import random
import os

counter = 0

def karatsuba(x, y, depth, file):
    """Function to multiply 2 numbers in a more efficient manner than the grade school algorithm"""
    global counter

    with open(file, 'a') as f:
        if len(str(x))>len(str(y)):
            print("{};1;{}".format(depth, len(str(y))), file=f)
        else:
            print("{};1;{}".format(depth, len(str(x))), file=f)

    if len(str(x)) == 1 or len(str(y)) == 1:
        return x*y
    else:
        counter = counter + 1
        n = max(len(str(x)),len(str(y)))
        nby2 = n / 2

        a = int(x / 10**(nby2))
        b = int(x % 10**(nby2))
        c = int(y / 10**(nby2))
        d = int(y % 10**(nby2))

        ac = karatsuba(a, c, depth+1, file)
        bd = karatsuba(b, d, depth+1, file)
        ad_plus_bc = karatsuba(a+b, c+d, depth+1, file) - ac - bd

        prod = ac * 10**(2*nby2) + (ad_plus_bc * 10**nby2) + bd

        return prod

if __name__ == '__main__':
    for i in range (100):
        x = random.randint(1000000000000000000,9000000000000000000000)
        y = random.randint(1000000000000000000,9000000000000000000000)
        if len(str(x))>len(str(y)):
            size = len(str(y))
        else:
            size = len(str(y))
        depth = 0
        path = "./karatsuba"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./karatsuba/output-{}-{}".format(x,y)
        karatsuba(x, y, depth, file)
        with open("./karatsuba/traces", 'a') as f:
            print("{};{}".format(size, counter), file=f)
        counter = 0

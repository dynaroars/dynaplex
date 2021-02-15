#!/usr/bin/env python3

import random
import os

counter = 0

def karatsuba(x, y, depth, file):
    """Function to multiply 2 numbers in a more efficient manner than the grade school algorithm"""
    global counter
    counter = counter + 1

    with open(file, 'a') as f:
        print("{};{}".format(depth, min(len(str(x)),len(str(y)))), file=f)

    if len(str(x)) == 1 or len(str(y)) == 1:
        return x*y
    else:
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
        x = random.randint(1, 990000000000000000000000)
        y = random.randint(1, 990000000000000000000000)
        size = min(len(str(x)),len(str(y)))
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

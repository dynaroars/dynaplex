#!/usr/bin/env python3

import random
import os

counter = 0

def loop(n):
    global counter
    i = 0
    while i<n:
        j = 0
        i+=1
        while j<n:
            j+=1
            counter = counter + 1
    return

if __name__ == '__main__':
    for i in range(100):
        n = random.randint(1,30)
        path = "./nested_loop"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        loop(n)
        with open("./nested_loop/traces", 'a') as f:
            print("{};{}".format(n, counter), file=f)
        counter = 0

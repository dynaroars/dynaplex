#!/usr/bin/env python3

import random
import os

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-100, 100))
    return list


def loop(arr, file):
    depth = 0
    index = 0

    for i in arr:
        with open(file, 'a') as f:
            print("{};{}".format(depth, len(arr)-index), file=f)
                    
        depth = depth + 1
        index = index + 1
    

def main():
    size = random.randint(1,500)
    arr = random_list(size)

    path = "./loop"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./loop/output-{}".format(size)
    loop(arr, file)

if __name__ == '__main__':
    for i in range(100):
        main()


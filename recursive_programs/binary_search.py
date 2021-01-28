#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return sorted(list)

def binary_search(arr, low, high, x, depth, file):
    global counter
    counter = counter + 1
    with open(file, 'a') as f:
        print("{};{}".format(depth, high-low), file=f)
    if high >= low:

        mid = (high + low) // 2

        if arr[mid] == x:
            return mid

        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x, depth+1, file)

        else:
            return binary_search(arr, mid + 1, high, x, depth+1, file)

    else:
        return -1

def main():
    global counter
    # counter = 0
    size = random.randint(1,10000)
    arr = random_list(size)
    depth = 0

    path = "./binary_search"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./binary_search/output-{}".format(size)
    binary_search(arr, 0, size-1, arr[random.randint(0,size-1)], depth, file)
    with open("./binary_search/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0

if __name__ == '__main__':
    for i in range(1000):
        main()

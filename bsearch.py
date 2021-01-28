#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-100, 100))
    return list

def binary_search(arr, x, file):
    depth = 0
    low = 0
    high = len(arr) - 1
    mid = 0

    while low <= high:
        with open(file, 'a') as f:
            print("{};{}".format(depth, high-low), file=f)
        mid = (high + low) // 2

        # Check if x is present at mid
        if arr[mid] < x:
            low = mid + 1

        # If x is greater, ignore left half
        elif arr[mid] > x:
            high = mid - 1

        # If x is smaller, ignore right half
        else:
            return mid
        depth = depth + 1
    # If we reach here, then the element was not present
    return -1

def main():
    # global counter
    # counter = 0
    size = random.randint(1,500)
    arr = random_list(size)

    path = "./bsearch"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./bsearch/output-{}".format(size)
    binary_search(arr, arr[random.randint(0,size-1)], file)
    # with open("./binary_search/traces", 'a') as f:
    #     print("{};{}".format(size, counter), file=f)
    # counter = 0

if __name__ == '__main__':
    for i in range(100):
        main()

#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

#recursive quicksort
#T(n) = T(n-1) + n
def quickSort(arr, low, high, depth, file):
    if depth==0:
        global counter
        counter = counter + 1

    if low < high:
        with open(file, 'a') as f:
            print("{};{}".format(depth, (high-low)), file=f)
        n = random.randint(1, high-low+1)
        m1 = n + low
        m2 = m1 - 1
        quickSort(arr, m1, high, depth+1, file)
        quickSort(arr, low, m2, depth+1, file)

# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./quick_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./quick_sort/output-{}".format(size)
    quickSort(arr, 0, size-1, depth, file)
    with open("./quick_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0

if __name__ == '__main__':
    for i in range(100):
       main()
    #main()

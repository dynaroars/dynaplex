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
    if high - low < 2:
        return

    with open(file, 'a') as f:
        print("{};{}".format(depth, (high-low)), file=f)

    pivot_index = random.randint(low, high-1)
    arr[high-1], arr[pivot_index] = arr[pivot_index], arr[high-1]
    pivot = arr[pivot_index]

    i = low -1
    for j in range(low, high-1):
        if depth==0:
            global counter
            counter += 1
        if(arr[j] <= pivot):
            i = i + 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[high-1] = arr[high-1], arr[i+1]

    quickSort(arr, low, i+1, depth+1, file)
    quickSort(arr, i+2, high, depth+1, file)
    return arr
# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./qsort_steps"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./qsort_steps/output-{}".format(size)
    quickSort(arr, 0, size, depth, file)
    with open("./qsort_steps/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0

if __name__ == '__main__':
    for i in range(100):
       main()
    #main()

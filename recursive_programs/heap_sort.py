#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

# Recursive heapsort
#T(n) = T(n-1) + O(log n)
def heapify(arr, n, i, depth, file):
    with open(file, 'a') as f:
        print("{};{}".format(depth, n-i), file=f)

    global counter

    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < n and arr[i] < arr[l]:
        largest = l
        counter = counter + 1

    if r < n and arr[largest] < arr[r]:
        largest = r
        counter = counter + 1

    if largest != i:
        arr[i],arr[largest] = arr[largest],arr[i] # swap
        counter = counter + 1

        heapify(arr, n, largest, depth+1, file)


def heapSort(arr, depth, file):
    n = len(arr)

    global counter

    for i in range(n//2 - 1, -1, -1):
        counter = counter + 1
        heapify(arr, n, i, depth, file)
        depth = depth+1

    for i in range(n-1, 0, -1):
        counter = counter + 1
        arr[i], arr[0] = arr[0], arr[i] # swap
        heapify(arr, i, 0, depth, file)
        depth = depth+1


# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 1000)
    arr = random_list(size)
    depth = 0

    path = "./heap_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./heap_sort/output-{}".format(size)
    heapSort(arr, depth, file)
    with open("./heap_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0
    
if __name__ == '__main__':
    for i in range(100):
       main()
    #main()

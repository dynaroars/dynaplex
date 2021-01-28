#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

# Recursive function to sort an array using insertion sort
# T(n) = T(n-1) + n
def insertion_sort(arr,n, depth, file):
    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)

    global counter

    if n<=1:
        return
    insertion_sort(arr,n-1, depth+1, file)
    last = arr[n-1]
    j = n-2
    while (j>=0 and arr[j]>last):
        counter = counter + 1
        arr[j+1] = arr[j]
        j = j-1
    arr[j+1]=last
    return


# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./insertion_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./insertion_sort/output-{}".format(size)
    insertion_sort(arr, size, depth, file)
    with open("./insertion_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0
    
if __name__ == '__main__':
    for i in range(100):
       main()
    #main()

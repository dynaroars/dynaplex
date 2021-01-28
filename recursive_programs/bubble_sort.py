#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

# Recursive Bubble Sort
# T(n) = T(n-1) + n
def bubble_sort(arr, n, depth, file):
    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)

    global counter
    if n==1:
        return arr

    for i in range(n-1):
        #counter = counter + 1
        if arr[i]>arr[i+1]:
            counter = counter + 1
            arr[i], arr[i+1] = arr[i+1], arr[i]

    return bubble_sort(arr, n-1, depth+1, file)



# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./bubble_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./bubble_sort/output-{}".format(size)
    bubble_sort(arr, size, depth, file)
    with open("./bubble_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0
    

if __name__ == '__main__':
    for i in range(70):
       main()
    #main()

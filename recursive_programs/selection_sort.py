#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

# Return minimum index
def minIndex( a , i , j, depth, file):
    global counter
    with open(file, 'a') as f:
        print("{};{}".format(depth, j-i), file=f)

    if i == j:
        counter = counter + 1
        return i

    # Find minimum of remaining elements
    k = minIndex(a, i + 1, j, depth+1, file)

    # Return minimum of current
    # and remaining.
    return (i if a[i] < a[k] else k)

# Recursive selection sort. n is
# size of a[] and index is index of
# starting element.
def selection_sort(a, n, index, depth, file):
    global counter
    counter = counter + 1
    with open(file, 'a') as f:
        print("{};{}".format(depth, n-index), file=f)

    # Return when starting and
    # size are same
    if index == n:
        return -1

    # calling minimum index function
    # for minimum index
    k = minIndex(a, index, n-1, depth+1, file)

    # Swapping when index and minimum
    # index are not same
    if k != index:
        a[k], a[index] = a[index], a[k]

    # Recursively calling selection
    # sort function
    selection_sort(a, n, index + 1, depth+1, file)



# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./selection_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./selection_sort/output-{}".format(size)
    selection_sort(arr, size, 0, depth, file)
    with open("./selection_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0


if __name__ == '__main__':
    for i in range(70):
       main()
    #main()

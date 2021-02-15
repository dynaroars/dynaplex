#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

# Recursive function to perform selection sort on sublist[i..n-1]
def selection_sort(A, i, n, depth, file):
    with open(file, 'a') as f:
        print("{};{}".format(depth, (n-i)), file=f)

    if not (i + 1 < n):
        return
    # find the minimum element in the unsorted sublist[i..n-1]
    # and swap it with A[i]
    min = i
    for j in range(i + 1, n):
        if depth==0:
            global counter
            counter = counter + 1
        # if A[j] element is less, then it is the minimum
        if A[j] < A[min]:
            min = j  # update index of min element

    # swap the minimum element in sublist[i..n-1] with A[i]
    temp = A[min]
    A[min] = A[i]
    A[i] = temp

    selection_sort(A, i + 1, n, depth+1, file)

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
    selection_sort(arr, 0, size, depth, file)
    with open("./selection_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0


if __name__ == '__main__':
    for i in range(100):
       main()

#!/usr/bin/env python3

import random
import os

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-100,-100))
    return list

#Recursive Bubble Sort
#T(n) = T(n-1) + n
def bubble_sort(arr, n, depth, file):
    with open(file, 'a') as f:
        print("{};1;{}".format(depth, n), file=f)

    if n==1:
        return arr

    for i in range(n-1):
        if arr[i]>arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]

    return bubble_sort(arr, n-1, depth+1, file)

# Recursive function to sort an array using insertion sort
# T(n) = T(n-1) + n
def insertion_sort(arr,n, depth, file):
    with open(file, 'a') as f:
        print("{};1;{}".format(depth, n), file=f)

    if n<=1:
        return
    insertion_sort(arr,n-1, depth+1, file)
    last = arr[n-1]
    j = n-2
    while (j>=0 and arr[j]>last):
        arr[j+1] = arr[j]
        j = j-1
    arr[j+1]=last
    return

# Recursive heapsort
#T(n) = T(n-1) + O(log n)
def heapify(arr, n, i, depth, file):
    with open(file, 'a') as f:
        print("{};1;{}".format(depth,n), file=f)
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < n and arr[i] < arr[l]:
        largest = l

    if r < n and arr[largest] < arr[r]:
        largest = r

    if largest != i:
        arr[i],arr[largest] = arr[largest],arr[i] # swap

        heapify(arr, n, largest, depth+1, file)


def heapSort(arr, depth, file):
    n = len(arr)

    for i in range(n//2 - 1, -1, -1):
        heapify(arr, n, i, depth, file)
        depth = depth+1

    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i] # swap
        heapify(arr, i, 0, depth, file)
        depth = depth+1

def partition(arr,low,high):
    i = ( low-1 )
    pivot = arr[high]

    for j in range(low , high):
        if arr[j] <= pivot:
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]

    arr[i+1],arr[high] = arr[high],arr[i+1]
    return ( i+1 )

#recursive quicksort
#T(n) = T(n-1) + n
def quickSort(arr, low, high, depth, file):
    if low < high:
        with open(file, 'a') as f:
            print("{};1;{}".format(depth, (high-low)), file=f)
        pi = partition(arr,low,high)
        quickSort(arr, low, pi-1, depth+1, file)
        quickSort(arr, pi+1, high, depth+1, file)
        
# Driver collect traces
def main():
    size = random.randint(1,500)
    arr = random_list(size)
    depth = 0
    path = "./insertion_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./insertion_sort/output-{}".format(size)
    insertion_sort(arr, size, depth, file)

    path = "./bubble_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./bubble_sort/output-{}".format(size)
    bubble_sort(arr, size, depth, file)

    path = "./heap_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./heap_sort/output-{}".format(size)
    heapSort(arr, depth, file)

    path = "./quick_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./quick_sort/output-{}".format(size)
    quickSort(arr, 0, size-1, depth, file)
if __name__ == '__main__':
    main()

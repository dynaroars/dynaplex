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

def partition(arr,low,high):
    i = ( low-1 )
    pivot = arr[high]
    global counter

    for j in range(low , high):
        if arr[j] <= pivot:
            counter = counter + 1
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]

    arr[i+1],arr[high] = arr[high],arr[i+1]
    return ( i+1 )

#recursive quicksort
#T(n) = T(n-1) + n
def quickSort(arr, low, high, depth, file):
    global counter
    if low < high:
        with open(file, 'a') as f:
            print("{};{}".format(depth, (high-low)), file=f) 
        pi = partition(arr,low,high)
        quickSort(arr, low, pi-1, depth+1, file)
        quickSort(arr, pi+1, high, depth+1, file)

def merge_sort(myList, depth, file):
    global counter
    with open(file, 'a') as f:
        print("{};{}".format(depth, len(myList)), file=f)
    if len(myList) > 1:
        # counter = counter + 1
        mid = len(myList) // 2
        left = myList[:mid]
        right = myList[mid:]

        # Recursive call on each half
        merge_sort(left, depth+1, file)
        merge_sort(right, depth+1, file)

        # Two iterators for traversing the two halves
        i = 0
        j = 0

        # Iterator for the main list
        k = 0

        while i < len(left) and j < len(right):
            counter = counter + 1
            if left[i] < right[j]:
              # The value from the left half has been used
              myList[k] = left[i]
              # Move the iterator forward
              i += 1
            else:
                myList[k] = right[j]
                j += 1
            # Move to the next slot
            k += 1

        # For all the remaining values
        while i < len(left):
            counter = counter + 1
            myList[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            counter = counter + 1
            myList[k]=right[j]
            j += 1
            k += 1
    return

# Recursive Python3 code to sort
# an array using selection sort

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
    size = random.randint(1, 1000)
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
    
    path = "./bubble_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./bubble_sort/output-{}".format(size)
    bubble_sort(sorted(arr, reverse=True), size, depth, file)
    with open("./bubble_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0
    
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

    path = "./merge_sort"
    try:
       os.mkdir(path)
    except OSError as error:
       pass
    file = "./merge_sort/output-{}".format(size)
    merge_sort(arr, depth, file)
    with open("./merge_sort/traces", 'a') as f:
       print("{};{}".format(size, counter), file=f)
    counter = 0

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
    for i in range(100):
       main()
    #main()

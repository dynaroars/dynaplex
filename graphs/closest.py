#!/usr/bin/env python3
#this program is adapted from closest_pair pseudocode in https://dl.acm.org/doi/pdf/10.1145/3339984?casa_token=TevpmWvN9lYAAAAA:HcG0IC79QbRNtuK88vBb5lx0yQ5RzkyCp5VAYapTajRCvy75_XUCIfuO61KoZ852rlTqPAyEU0lxGg


import random
import os

counter = 0

def clst_pair (i, j):
    global counter
    counter += 1
    assert i <= j
    if(i <= j-3):
        k = i + (j-i+1)//2 -1
        clst_pair(i, k)
        clst_pair(k+1, j)
        fetch_and_scan(i, j)
    else:
        pass

def fetch_and_scan(i, j):
    global counter
    assert(i <= j-3)
    l = i
    p = i
    while p<=j:
        counter += 1
        l = l + 1
        p = p + 1

    if l >= i+1 and l <= j+1:
        p = i
        while p <= l-1:
            m = p+1
            while m-p <= 7 and m <= l-1:
                m = m+1
                counter += 1
            p = p+1

def mergesort(i,j):
    global counter
    counter += 1
    assert(i<=j)
    if i <= j-1:
        k = i + (j-i+1)//2 -1
        mergesort(i, k)
        mergesort(k+1, j)
        merge(i, j, k)

def merge(i, j, k):
    assert(i<=j)
    global counter
    m = i
    n = k+1
    l = i
    while l<=j:
        m = m+1
        n = n+1
        l = l+1
        counter += 1
    l = i
    while l<=j:
        l = l+1
        counter += 1

def copy(i, j, m, n):
    assert(i<=j and m<=n)
    k = i
    l = m
    global counter
    while k<=j and l<=n:
        k = k+1
        l = l+1
        counter += 1

if __name__ == '__main__':
    for i in range(100):
        i = random.randint(1, 500)
        j = random.randint(i, 500)
        assert i<=j

        copy(i, j, i, j)
        copy(i, j, i, j)
        mergesort(i, j)
        mergesort(i, j)

        path = "./closest"

        try:
            os.mkdir(path)
        except OSError as error:
            pass
        clst_pair(i, j)
        with open("./closest/traces", 'a') as f:
            print("{};{}".format((j-i), counter), file=f)
        counter = 0

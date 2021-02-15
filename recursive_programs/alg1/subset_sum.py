#!/usr/bin/env python3

import random
import os

counter = 0
found = False

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(0, 200))
    return list

def isSubsetSum(set, n, sum, depth, file) : 
    
    if depth==0:
        global counter
        counter = counter + 1
    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)

    # Base Cases 
    if (sum == 0) : 
        return True
    if (n == 0 and sum != 0) : 
        return False
   
    return isSubsetSum(set, n-1, sum, depth+1, file) or isSubsetSum(set, n-1, sum-set[n-1], depth+1, file)


def main():
    global counter
    # counter = 0
    size = random.randint(2,10)
    sum = random.randint(1,50)
    arr = random_list(size)
    depth = 0

    path = "./subset_sum"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./subset_sum/output-{}".format(size)
    isSubsetSum(arr, size, sum, depth, file)
    with open("./subset_sum/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0

if __name__ == '__main__':
    for i in range(20):
        main()


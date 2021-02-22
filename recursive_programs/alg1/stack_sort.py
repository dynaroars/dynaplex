#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

def sortedInsert(s, element, depth):
    if depth == 0:
        global counter
        counter = counter + 1
    if len(s) == 0 or element > s[-1]:
        s.append(element)
        return
    else:
        temp = s.pop()
        sortedInsert(s, element, depth)
        s.append(temp)

def sortStack(s, depth, file):
    with open(file, 'a') as f:
        print("{};{}".format(depth, len(s)), file=f)
    if depth == 0:
        global counter
        counter = counter + 1

    if len(s) != 0:
        temp = s.pop()
        sortStack(s, depth+1, file)
        sortedInsert(s, temp, depth)

# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./stack_sort"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./stack_sort/output-{}".format(size)
    sortStack(arr, depth, file)
    with open("./stack_sort/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0


if __name__ == '__main__':
    for i in range(100):
       main()

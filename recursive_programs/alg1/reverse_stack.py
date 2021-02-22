#!/usr/bin/env python3

import random
import os

counter = 0

def random_list(size):
    list = []
    for i in range(size):
        list.append(random.randint(-10000, 10000))
    return list

def insertAtBottom(stack, item, depth):
    if depth == 0:
        global counter
        counter = counter + 1

    if isEmpty(stack):
        push(stack, item)
    else:
        temp = pop(stack)
        insertAtBottom(stack, item, depth)
        push(stack, temp)

def reverse(stack, depth, file):
    with open(file, 'a') as f:
        print("{};{}".format(depth, len(stack)), file=f)
    if depth == 0:
        global counter
        counter = counter + 1

    if not isEmpty(stack):
        temp = pop(stack)
        reverse(stack, depth+1, file)
        insertAtBottom(stack, temp, depth)

def isEmpty( stack ):
    return len(stack) == 0

def push( stack, item ):
    stack.append( item )

def pop( stack ):
    if(isEmpty( stack )):
        print("Stack Underflow ")
        exit(1)

    return stack.pop()

# Driver collect traces
def main():
    global counter
    counter = 0
    size = random.randint(1, 500)
    arr = random_list(size)
    depth = 0

    path = "./reverse_stack"
    try:
        os.mkdir(path)
    except OSError as error:
        pass
    file = "./reverse_stack/output-{}".format(size)
    reverse(arr, depth, file)
    with open("./reverse_stack/traces", 'a') as f:
        print("{};{}".format(size, counter), file=f)
    counter = 0


if __name__ == '__main__':
    for i in range(100):
       main()

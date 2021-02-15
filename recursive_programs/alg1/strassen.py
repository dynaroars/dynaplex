#!/usr/bin/env python3

import numpy as np
import random
import os

counter = 0

def random_matrix(size):
    lists = []
    list = []
    for j in range(size):
        for i in range(size):
            list.append(random.randint(1, 100))
        lists.append(list)
        list = []
    return lists

def new_matrix(r, c, depth):
    """Create a new matrix filled with zeros."""
    matrix = [[0 for row in range(r)] for col in range(c)]
    if depth==0:
        global counter
        counter = counter + r*c
    return matrix



def split(matrix, depth):
    """Split matrix into quarters."""
    a = b = c = d = matrix
    global counter

    while len(a) > len(matrix)/2:
        a = a[:len(a)//2]
        b = b[:len(b)//2]
        c = c[len(c)//2:]
        d = d[len(d)//2:]
        if depth==0:
            counter = counter + 1

    while len(a[0]) > len(matrix[0])//2:
        for i in range(len(a[0])//2):
            if depth==0:
                counter = counter + 1
            a[i] = a[i][:len(a[i])//2]
            b[i] = b[i][len(b[i])//2:]
            c[i] = c[i][:len(c[i])//2]
            d[i] = d[i][len(d[i])//2:]

    return a, b, c, d
    # matrix = np.array(matrix)
    # # print(matrix.shape)
    # row, col = matrix.shape
    # row2, col2 = row//2, col//2
    # return matrix[:row2, :col2], matrix[:row2, col2:], matrix[row2:, :col2], matrix[row2:, col2:]



def add_matrix(a, b, depth):
    global counter

    if type(a) == int:
        d = a + b
    else:
        d = []
        for i in range(len(a)):
            c = []
            for j in range(len(a[0])):
                c.append(a[i][j] + b[i][j])
                if depth==0:
                    counter = counter + 1
            d.append(c)
    return d


def subtract_matrix(a, b, depth):
    global counter

    if type(a) == int:
        d = a - b
    else:
        d = []
        for i in range(len(a)):
            c = []
            for j in range(len(a[0])):
                c.append(a[i][j] - b[i][j])
                if depth==0:
                    counter = counter + 1
            d.append(c)
    return d


def strassen(x, y, n, depth, file):
    # base case: 1x1 matrix
    global counter
    with open(file, 'a') as f:
        print("{};{}".format(depth, n), file=f)

    if n == 1:
        z = [[0]]
        z[0][0] = x[0][0] * y[0][0]
        if depth==0:
            counter = counter + 1
        return z
    else:
        # split matrices into quarters
        a, b, c, d = split(x, depth)
        e, f, g, h = split(y, depth)

        # p1 = a*(f-h)
        p1 = strassen(a, subtract_matrix(f, h, depth), n/2, depth+1, file)

        # p2 = (a+b)*h
        p2 = strassen(add_matrix(a, b, depth), h, n/2, depth+1, file)

        # p3 = (c+d)*e
        p3 = strassen(add_matrix(c, d, depth), e, n/2, depth+1, file)

        # p4 = d*(g-e)
        p4 = strassen(d, subtract_matrix(g, e, depth), n/2, depth+1, file)

        # p5 = (a+d)*(e+h)
        p5 = strassen(add_matrix(a, d, depth), add_matrix(e, h, depth), n/2, depth+1, file)

        # p6 = (b-d)*(g+h)
        p6 = strassen(subtract_matrix(b, d, depth), add_matrix(g, h, depth), n/2, depth+1, file)

        # p7 = (a-c)*(e+f)
        p7 = strassen(subtract_matrix(a, c, depth), add_matrix(e, f, depth), n/2, depth+1, file)

        z11 = add_matrix(subtract_matrix(add_matrix(p5, p4, depth), p2, depth), p6, depth)

        z12 = add_matrix(p1, p2, depth)

        z21 = add_matrix(p3, p4, depth)

        z22 = add_matrix(subtract_matrix(subtract_matrix(p5, p3, depth), p7, depth), p1, depth)

        z = new_matrix(len(z11)*2, len(z11)*2, depth)
        for i in range(len(z11)):
            for j in range(len(z11)):
                z[i][j] = z11[i][j]
                z[i][j+len(z11)] = z12[i][j]
                z[i+len(z11)][j] = z21[i][j]
                z[i+len(z11)][j+len(z11)] = z22[i][j]
                if depth==0:
                    counter = counter + 1

        return z


if __name__ == '__main__':
    for i in range(100):
        size = 2 ** random.randint(1, 5)
        depth = 0
        x = random_matrix(size)
        y = random_matrix(size)

        path = "./strassen"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./strassen/output-{}".format(size)
        strassen(x, y, size, depth, file)
        # print(f"Using Strassen's algorithm:\na*b = {strassen(x, y, size)}")
        #
        # print(f"Using naive algorithm:\na*b = {direct_multiply(x, y)}")

        with open("./strassen/traces", 'a') as f:
            print("{};{}".format(size, counter), file=f)
        counter = 0

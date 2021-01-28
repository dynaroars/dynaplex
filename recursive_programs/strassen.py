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

def new_matrix(r, c):
    """Create a new matrix filled with zeros."""
    matrix = [[0 for row in range(r)] for col in range(c)]
    return matrix


def direct_multiply(x, y):
    if len(x[0]) != len(y):
        return "Multiplication is not possible!"
    else:
        p_matrix = new_matrix(len(x), len(y[0]))
        for i in range(len(x)):
            for j in range(len(y[0])):
                for k in range(len(y)):
                    p_matrix[i][j] += x[i][k] * y[k][j]
    return p_matrix


def split(matrix):
    """Split matrix into quarters."""
    a = b = c = d = matrix
    global counter

    while len(a) > len(matrix)/2:
        a = a[:len(a)//2]
        b = b[:len(b)//2]
        c = c[len(c)//2:]
        d = d[len(d)//2:]
        counter = counter + 1

    while len(a[0]) > len(matrix[0])//2:
        for i in range(len(a[0])//2):
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



def add_matrix(a, b):
    global counter

    if type(a) == int:
        d = a + b
    else:
        d = []
        for i in range(len(a)):
            c = []
            for j in range(len(a[0])):
                c.append(a[i][j] + b[i][j])
                counter = counter + 1
            d.append(c)
    return d


def subtract_matrix(a, b):
    global counter

    if type(a) == int:
        d = a - b
    else:
        d = []
        for i in range(len(a)):
            c = []
            for j in range(len(a[0])):
                c.append(a[i][j] - b[i][j])
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
        counter = counter + 1
        return z
    else:
        # split matrices into quarters
        a, b, c, d = split(x)
        e, f, g, h = split(y)

        # p1 = a*(f-h)
        p1 = strassen(a, subtract_matrix(f, h), n/2, depth+1, file)

        # p2 = (a+b)*h
        p2 = strassen(add_matrix(a, b), h, n/2, depth+1, file)

        # p3 = (c+d)*e
        p3 = strassen(add_matrix(c, d), e, n/2, depth+1, file)

        # p4 = d*(g-e)
        p4 = strassen(d, subtract_matrix(g, e), n/2, depth+1, file)

        # p5 = (a+d)*(e+h)
        p5 = strassen(add_matrix(a, d), add_matrix(e, h), n/2, depth+1, file)

        # p6 = (b-d)*(g+h)
        p6 = strassen(subtract_matrix(b, d), add_matrix(g, h), n/2, depth+1, file)

        # p7 = (a-c)*(e+f)
        p7 = strassen(subtract_matrix(a, c), add_matrix(e, f), n/2, depth+1, file)

        z11 = add_matrix(subtract_matrix(add_matrix(p5, p4), p2), p6)

        z12 = add_matrix(p1, p2)

        z21 = add_matrix(p3, p4)

        z22 = add_matrix(subtract_matrix(subtract_matrix(p5, p3), p7), p1)

        z = new_matrix(len(z11)*2, len(z11)*2)
        for i in range(len(z11)):
            for j in range(len(z11)):
                z[i][j] = z11[i][j]
                z[i][j+len(z11)] = z12[i][j]
                z[i+len(z11)][j] = z21[i][j]
                z[i+len(z11)][j+len(z11)] = z22[i][j]
                counter = counter + 1

        return z


if __name__ == '__main__':
    for i in range(50):
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

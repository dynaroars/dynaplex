#!/usr/bin/env python3
'''Recurrence complexity analyzer '''
import statistics
from os import listdir, path
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn import preprocessing, svm
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.cluster import KMeans
import math
import time
import argparse

class RecRel:
    ''' a structure storing the final results of recurrence relation '''
    def __init__(self, a, coef, diff):
        self.a = a
        self.coef = coef
        self.diff = diff

class Node:
    ''' node of a parsing tree '''
    def __init__(self, d: int, val: float):
        self.d = d
        self.val = val

def read_logs(filename):
    ''' reads traces from a file and returns calculated coeficients and diffs'''
    # print(filename)
    with open(filename) as file:
        lines = file.readlines()
        num_rec_calls = get_num_rec_calls(lines)
        queue, coefs, diffs = [], [], []
        prev  = Node(-1, 0.0)
        for i, line in enumerate(lines):
            cur = get_cur_node(line)
            # find the bottom of the branch
            if (prev.d <= cur.d and len(lines) - 1 != i):
                prev = cur
                queue.append(cur)
                continue
            # calculate coefs for the current branch
            coefs, diffs = calc_coefs(queue, coefs, diffs, num_rec_calls)
            queue.append(cur)
            prev = cur
    file.close()
    return coefs, diffs, num_rec_calls

def calc_coefs(queue, coefs, diffs, num_rec_calls):
    ''' calculates coeficients and diff.'''

    # get parent node
    p_index = len(queue)-1-num_rec_calls
    if (p_index < 0):
        return coefs, diffs
    parent = queue[p_index]

    # prepare a list of coefs
    if len(coefs) == 0:
        coefs = [[] for i in range(num_rec_calls)]
        diffs = [[] for i in range(num_rec_calls)]

    for i in range(num_rec_calls-1, -1, -1):
        child = queue.pop()
        if child.val != float(0) and child.val != float(1):
            coefs[i].append(parent.val / child.val)
            diffs[i].append(parent.val - child.val)

    # while we backtracking we have to make sure that the level is fully 'filled'
    count = 1
    prev = parent
    for i in range(1, num_rec_calls, 1):
        index = len(queue) - 1 - i
        if index < 0:
            break
        node = queue[index]
        if prev.d == node.d:
            count += 1
        prev = node

    if count == num_rec_calls:
        calc_coefs(queue, coefs, diffs, num_rec_calls)
    return coefs, diffs

def get_cur_node(line: str):
    ''' builds and returns a Node that fed by the parsed string from traces '''

    # each line has the following format: depth;a;n. TODO: derive 'a' using a static analysis tool
    m = line.rstrip('\n').split(';')
    # print(m)
    m = [int(m[0]), m[1]]
    return Node(m[0], float(m[1]))

def get_num_rec_calls(lines: list):
    ''' returns the number of recursive calls that a function does.
    Basically, it is a number of branches each parent node has'''

    max_depth, nums = 0, 1
    prev = Node(-1, 0.0)
    for i, line in enumerate(lines):
        # print(line)
        cur = get_cur_node(line)
        if cur.d < prev.d:
            return nums
        if (prev.d <= cur.d and len(lines) - 1 > i):
            if max_depth < cur.d:
                max_depth = cur.d
                nums = 1
            if prev.d == cur.d and cur.d == max_depth:
                nums += 1
        prev = cur
    return nums


if __name__ == '__main__':
    parser = argparse.ArgumentParser(prog="analyzer")
    parser.add_argument('-trace', help="path/to/traceFile")
    parser.add_argument('-maxdeg', default=5, help="maximum deg of polynomial")
    args = parser.parse_args()
    dir_name = args.trace
    maxdeg = int(args.maxdeg)
    num_rec_calls = 0

    filenames = [f for f in listdir(dir_name) if f.startswith('output')]
    final_coefs, final_diffs = [], []
    start_time = time.time()
    for filename in filenames:
        # print("analyzing a file:{}".format(filename))
        coefs, diffs, num_rec_calls = read_logs(dir_name + "/" + filename)
        if len(final_coefs) == 0:
            final_coefs = coefs
            final_diffs = diffs

        if len(final_coefs) != len(coefs):
            continue
        for i, coef in enumerate(coefs):
            final_coefs[i].extend([c for c in coef])
        for i, diff in enumerate(diffs):
            final_diffs[i].extend([d for d in diff])

    x = [i for i,v in enumerate(final_coefs[0])]
    rec_relations = []

    for i,coefs in enumerate(final_coefs):
        data = np.array([x, coefs])
        df = pd.DataFrame(list(zip(x, coefs)), columns=['node ids', 'coefs'])

        X = np.array(df['node ids']).reshape(-1, 1)
        y = np.array(df['coefs']).reshape(-1, 1)

        X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.25)
        regr = LinearRegression()

        regr.fit(X_train, y_train)

        med_diff = statistics.median(final_diffs[i])
        format = "diff" if all(math.isclose(final_diffs[i][0], x, rel_tol=1e-3) or x <= 0.0 for x in final_diffs[i]) else "coef"
        if(med_diff>3):
            format = "coef" # I haven't seen a program with T(n) = T(n-a)+f(n) where a>2
        rec_relations.append(RecRel(1, regr.intercept_[0], med_diff))

    seconds = time.time() - start_time

    # with open("{}/analysis".format(dir_name)) as f:
    print("Time: ", seconds)
    #print("Time: ", seconds, file=f)
    for i in range(len(final_coefs)):
        print("diff {} regr {}".format(rec_relations[i].diff, rec_relations[i].coef))
        coef = rec_relations[i].coef
        if format == "diff" or int(round(coef))==1:
            res = abs(int(round(rec_relations[i].diff))) #some recursion size increase with depth instead of decreasing (ex: recursive_loop)
            #print("Format: 2", file=f)
            #print("a: {}".format(str(res)), file=f)
            #print("b: {}".format(str(res)), file=f)
            print(str(rec_relations[i].a) + "*T(n-" + str(res) + ")")
        else:
            res = int(round(coef))
            #print("Format: 1", file=f)
            #print("a: {}".format(str(rec_relations[i].a)), file=f)
            #print("b: {}".format(str(res)), file=f)
            print(str(rec_relations[i].a) + "*T(n/" + str(res) + ")")
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
import subprocess as sp

class RecRel:
    ''' a structure storing the final results of recurrence relation '''
    def __init__(self, a, b, k, p, fmt):
        self.a = a
        self.b = b
        self.k = k
        self.p = p
        self.format = fmt

    def __str__(self):
        if self.format == 1:
            return "T(n) = {} T(n/{}) + (n^{}(logn)^{})".format(self.a, self.b, self.k, self.p)
        elif self.format == 2:
            if self.b==0:
                return "T(n) = T(n-{}) + (n^{}(logn)^{})".format(self.a, self.k, self.p)
            else:
                return "T(n) = T(n-{}) + T(n-{}) + (n^{}(logn)^{})".format(self.a, self.b, self.k, self.p)


class Node:
    ''' node of a parsing tree '''
    def __init__(self, d: int, val: float):
        self.d = d
        self.val = val


def vcmd(cmd, inp=None, shell=True):
    proc = sp.Popen(cmd,shell=shell,stdin=sp.PIPE,
                    stdout=sp.PIPE,stderr=sp.PIPE)
    return proc.communicate(input=inp)

def read_logs(filename):
    ''' reads traces from a file and returns calculated coeficients and diffs'''
    with open(filename) as file:
        lines = file.readlines()
        num_rec_calls = get_num_rec_calls(lines, filename)
        queue, coefs, diffs = [], [], []
        prev  = Node(-1, 0.0)
        for i, line in enumerate(lines):
            cur = get_cur_node(line, filename)
            # find the bottom of the branch
            if (prev.d <= cur.d and len(lines) - 1 != i):
                prev = cur
                queue.append(cur)
                continue
            # calculate coefs for the current branch
            coefs, diffs = calc_coefs(queue, coefs, diffs, num_rec_calls)
            queue.append(cur)
            # print(cur.d, cur.val)
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
        if child.val != float(0): #and child.val != float(1) check this
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

def get_cur_node(line: str, filename):
    ''' builds and returns a Node that fed by the parsed string from traces '''

    m = line.rstrip('\n').split(';')
    assert(len(m)==2), "bad traces in file {}".format(filename)
    m = [int(m[0]), m[1]]
    return Node(m[0], float(m[1]))

def get_num_rec_calls(lines: list, filename):
    ''' returns the number of recursive calls that a function does.
    Basically, it is a number of branches each parent node has'''

    max_depth, nums = 0, 1
    prev = Node(-1, 0.0)
    for i, line in enumerate(lines):
        # print(line)
        cur = get_cur_node(line, filename)
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
    parser.add_argument('-plot', action='store_true', help="To display plots of polynomial regression")
    args = parser.parse_args()
    dir_name = args.trace
    maxdeg = int(args.maxdeg)
    num_rec_calls = 0

    filenames = [f for f in listdir(dir_name) if f.startswith('output')]
    assert(len(filenames)>0), "Traces for recursive programs should be in file prefixed \"output-\""
    final_coefs, final_diffs = [], []
    start_time = time.time()
    for filename in filenames:
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
    # print(final_coefs)
    # print(final_diffs)
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
        rec_relations.append((regr.intercept_[0], med_diff))

    #seconds = time.time() - start_time

    for i in range(len(final_coefs)):
        print("diff {} coef {}".format(rec_relations[i][1], rec_relations[i][0]))
        coef = rec_relations[i][0]
        if format == "diff" or int(round(coef))==1:
            format = "diff"
            res = abs(int(round(rec_relations[i][1])))
            print("T(n-" + str(res) + ")")
        else:
            res = int(round(coef))
            print("T(n/" + str(res) + ")")
    
    #Calculating polynomial relations
    print("Computing polynomial relations")
    cmd = "../dig.py -trace {}/traces -maxdeg 5 -r".format(dir_name)
    print("Command: ", cmd)
    out, err = vcmd(cmd)
    #assert not err, "Failed:\n{}".format(err)
    out = str(out).split('\\n')
    for i in out:
        print(i)
    k = int(out[len(out)-2].split(' ')[0].split('=')[1])
    p = int(out[len(out)-2].split(' ')[1].split('=')[1])

    #assume format is same for all branches of recursion tree
    if(format == "coef"):
        format = 1
        a = len(rec_relations)
        b = res
        relation = RecRel(a, b, k, p, 1)
    else:
        format = 2
        if len(rec_relations) == 1:
            a = res
            b = 0
            relation = RecRel(a, b, k, p, 2)
        else:
            a = int(rec_relations[0][1])
            b = int(rec_relations[1][1])
            relation = RecRel(a, b, k, p, 2)
    
    print(relation)

    print("Solving the recurrence relation")
    cmd = "../recurrence_solver.py -format {} -a {} -b {} -k {} -p {}".format(format, a, b, k, p)
    print("Command: ", cmd)
    out, err = vcmd(cmd)
    assert not err, "Failed to solve the recurrence relation\n{}".format(err)
    seconds = time.time() - start_time
    print("Analysis complete in {:5.3f} seconds".format(seconds))
    print(str(out))

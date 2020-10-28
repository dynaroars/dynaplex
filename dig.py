#!/usr/bin/env python3
'''Estimates complexity of iterative functions using techniques from DIG'''

from pathlib import Path
from os import path
import argparse
import random
import numpy
import math
import time
from sklearn.metrics import r2_score
import matplotlib.pyplot as plt

def read_traces(filename):
    ''' reads traces from a file. format "size;counter"'''
    sizes = []
    counters = []
    with open(filename) as file:
        lines = file.readlines()
    for line in lines:
        size, counter = line.split(';')
        sizes.append(int(size))
        counters.append(int(counter.strip()))

    return sizes, counters

def poly_regression(sizes, counters, maxsize, maxdeg, plotting=False):
    assert(len(sizes)==len(counters)), "Invalid traces"
    assert(maxsize>0), "maxinput <= 0"
    assert(maxdeg>=1), "maxdeg<1"

    x, y = sizes, counters
    models = []
    r2_scores = []
    if plotting:
        plt.scatter(x, y)
        myline = numpy.linspace(1, maxsize*1.5, maxsize*10)

    for i in range(1, maxdeg+1):
        mymodel = numpy.poly1d(numpy.polyfit(x, y, i))
        models.append(mymodel)
        if plotting:
            plt.plot(myline, mymodel(myline), c=(random.random(), random.random(), random.random()), label="{}-D polynomial".format(i))

    #discard models where the coe of the highest order is less than 1/maxinput
    if plotting: #for debug purpose
        print("Models before applying Heuristics ", models)

    tmp = models
    models = []
    for model in tmp:
        order = model.order
        high_order_coe  = model[order]
        if not(high_order_coe < (1.0/float(maxsize))): #make sure the heuristics work
            models.append(model)

    assert(len(models)>0), "Heuristics eliminated all candidate models"
    if plotting: #for debug purpose
        print("Models after applying Heuristics ", models)

    #Calculate r2_scores
    for model in models:
        r_square = r2_score(y, mymodel(x))
        r2_scores.append(r_square)

    highest_r2 = max(r2_scores)
    #pick the highest order model if there are multiple max r2
    if r2_scores.count(highest_r2)>1:
        r2_scores.reverse()
        models.reverse()

    index = r2_scores.index(highest_r2)
    complexity = models[index].order

    if plotting:
        plt.xlabel('Input size')
        plt.ylabel('Instruction Counter')
        plt.legend(loc='upper left')
        plt.show()

    return complexity


if __name__ == '__main__':
    parser = argparse.ArgumentParser(prog="dig.py")
    parser.add_argument('-trace', help="path/to/traceFile")
    parser.add_argument('-maxsize', help="maximum size of input")
    parser.add_argument('-maxdeg', help="maximum deg of polynomial")
    parser.add_argument('-plot', help="True to display plots of regression polynomial")
    args = parser.parse_args()
    trace_file = Path(args.trace)
    assert(path.exists(trace_file)), "Trace file doesn't exist"
    maxsize = int(args.maxsize)
    maxdeg = int(args.maxdeg)
    plot = args.plot
    if plot=="True":
        plot = True
    else:
        plot = False
    sizes, counters = read_traces(trace_file)
    complexity = poly_regression(sizes, counters, maxsize, maxdeg, plot)
    print("Complexity is O(n^{})".format(complexity))

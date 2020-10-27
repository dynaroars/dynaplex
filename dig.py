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
        r_square = r2_score(y, mymodel(x))
        models.append(mymodel)
        r2_scores.append(r_square)
        if plotting:
            plt.plot(myline, mymodel(myline), c=(random.random(), random.random(), random.random()), label="{}-D polynomial".format(i))

    if plotting:
        plt.xlabel('Input size')
        plt.ylabel('Instruction Counter')
        plt.legend(loc='upper left')
        plt.show()

    #discard models where the coe of the highest order is less than 1/maxinput
    if plotting: #for debug purpose
        print("Models before applying Heuristics ", models)
    for i in range(len(models)):
        order = models[i].order
        high_order_coe  = models[i][order]
        #if (high_order_coe * math.pow(maxsize, order) <= 1):
        if high_order_coe < (1/maxsize):
            models.remove(models[i])
            r2_scores.remove(r2_scores[i])

    assert(len(models)>0), "Heuristics eliminated all candidate models"
    if plotting: #for debug purpose
        print("Models after applying Heuristics ", models)

    highest_r2 = max(r2_scores)
    index = r2_scores.index(highest_r2)
    complexity = models[index].order

    return complexity


def get_regression(size, counter):

    #quadratic polynomial fit
    x = np.array(size)
    y = np.array(counter)
    z = np.polyfit(x, y, 3)
    cubic = z[0]

    #quadratic polynomial fit
    x = np.array(size)
    y = np.array(counter)
    z = np.polyfit(x, y, 2)
    quadratic = z[0]

    #linear regression
    y = np.array(counter)
    z = np.polyfit(x, y, 1)
    linear = z[0]

    #logarithmic fit
    logs = [c*math.log(c, 2) if c is not 0  else 0 for c in size] #arbitrary make log(0,2) = 0
    y = np.array(logs)
    z = np.polyfit(counter, y, 1)
    nlogs = z[0]
    # print(z)

    #logarithmic fit
    logs = [math.log(c, 2) if c is not 0  else 0 for c in size] #arbitrary make log(0,2) = 0
    y = np.array(logs)
    z = np.polyfit(counter, y, 1)
    logs = z[0]
    # print(z)

    return cubic, quadratic, linear, nlogs, logs

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

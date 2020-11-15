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
from scipy.optimize import curve_fit

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

def logs_regression(sizes, counters):
    nlogs = [c*math.log(c, 2) if c is not 0 else 0 for c in sizes] #arbitrary make log(0,2) = 0
    nlog_model = numpy.poly1d(numpy.polyfit(nlogs, counters, 1))
    nlog_r2 = r2_score(counters, nlog_model(nlogs))
    logs = [math.log(c, 2) if c is not 0  else 0 for c in sizes] #arbitrary make log(0,2) = 0
    log_model = numpy.poly1d(numpy.polyfit(logs, counters, 1))
    log_r2 = r2_score(counters, log_model(logs))
    print("nlog: {}, r2_score {}".format(nlog_model, nlog_r2))
    print("log: {}, r2_score {}".format(log_model, log_r2))
    #if nlog_r2 < 0.75 and log_r2 < 0.75:
    #    return None
    if log_r2 > nlog_r2:
        return "log", log_r2, nlog_model
    else:
        return "nlog", nlog_r2, log_model

def func(x, a, b):
    return a *numpy.log(x) + b

def poly_regression(sizes, counters, maxdeg, plotting=False):
    assert(len(sizes)==len(counters)), "Invalid traces"
    #assert(maxsize>0), "maxinput <= 0"
    assert(maxdeg>=1), "maxdeg<1"

    x, y = sizes, counters
    maxsize = max(sizes)
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
        if not(high_order_coe < (1.0/maxsize) ): #make sure the heuristics work
            models.append(model)

    assert(len(models)>0), "Heuristics eliminated all candidate models"

    #Calculate r2_scores
    for model in models:
        r_square = r2_score(y, mymodel(x))
        r2_scores.append(r_square)
    if plotting: #for debug purpose
        print("Models after applying Heuristics ", models)
        print(r2_scores)
    highest_r2 = max(r2_scores)
    #pick the highest order model if there are multiple max r2
    if r2_scores.count(highest_r2)>1:
        r2_scores.reverse()
        models.reverse()

    index = r2_scores.index(highest_r2)
    #complexity = models[index].order
    logarithmic, score, log_model = logs_regression(sizes, counters)

    if highest_r2 > score:
        complexity = "n^{}".format(models[index].order)
    else:
        complexity = "{} n".format(logarithmic)

    if highest_r2 < 0.2 and score < 0.2: #regression gives a bad model
        complexity = "1"

    if plotting:
        x = numpy.linspace(1, maxsize*1.5, maxsize*10)
        y = func(x, log_model(0), log_model(1))
        yn = y + 0.2*numpy.random.normal(size=len(x))
        popt, pcov = curve_fit(func, x, yn)
        #plt.plot(x, func(x, *popt), c=(random.random(), random.random(), random.random()), label="log")
        #plt.plot(myline, mymodel(myline), c=(random.random(), random.random(), random.random()), label="{}-D polynomial".format(i))
        plt.xlabel('Input size')
        plt.ylabel('Instruction Counter', rotation=90)
        plt.legend(loc='upper left')
        plt.grid()
        plt.show()

    return complexity


if __name__ == '__main__':
    parser = argparse.ArgumentParser(prog="dig.py")
    parser.add_argument('-trace', help="path/to/traceFile")
    #parser.add_argument('-maxsize', help="maximum size of input")
    parser.add_argument('-maxdeg', help="maximum deg of polynomial")
    parser.add_argument('-plot', help="True to display plots of regression polynomial")
    args = parser.parse_args()
    trace_file = Path(args.trace)
    assert(path.exists(trace_file)), "Trace file doesn't exist"
    #maxsize = int(args.maxsize)
    maxdeg = int(args.maxdeg)
    plot = args.plot
    if plot=="True":
        plot = True
    else:
        plot = False
    sizes, counters = read_traces(trace_file)
    start_time = time.time()
    complexity = poly_regression(sizes, counters, maxdeg, plot)
    seconds = time.time()-start_time
    print("Analysis complete in {} seconds\nComplexity is O({})".format(seconds, complexity))

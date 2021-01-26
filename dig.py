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
        return "log", log_r2, log_model, 
    else:
        return "nlog", nlog_r2, nlog_model

def func(x, a, b):
    return a *numpy.log(x) + b

def poly_regression(sizes, counters, maxdeg, plotting=False, r=False):
    assert(len(sizes)==len(counters)), "Invalid traces"
    assert(maxdeg>=1), "maxdeg<1"
    start_time = time.time()
    k = 0  #n^k(logn)^p
    p = 0
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
        if not(high_order_coe < (1.0/maxsize)): #make sure the heuristics work
            models.append(model)

    #assert(len(models)>0), "Heuristics eliminated all candidate models"
    if(len(models)<1):
        complexity = "1"
        print("Analysis complete in {} seconds\nComplexity is O({})".format(time.time()-start_time, complexity))
        return complexity, k, p

    #Calculate r2_scores
    for model in models:
        r_square = r2_score(y, mymodel(x))
        r2_scores.append(r_square)
    #if plotting: #for debug purpose
    print("Models after applying Heuristics ", models)
    print("r2_scores ", r2_scores)
    highest_r2 = max(r2_scores)
    #pick the highest order model if there are multiple max r2
    if r2_scores.count(highest_r2)>1:
        #r2_scores.reverse()
        #models.reverse()
        max_r = 0
        index = 0
        t = 0
        for i, j in zip(r2_scores, models):
            if(i == highest_r2):
                if(j[j.order] >= max_r):
                    max_r = j[j.order]
                    index = t
            t = t + 1
    else:
        index = r2_scores.index(highest_r2)
    logarithmic, score, log_model = logs_regression(sizes, counters)

    if highest_r2 > score:
        complexity = "n^{}".format(models[index].order)
        k = models[index].order
    else:
        complexity = "{} n".format(logarithmic)
        p = 1
        k = 1 if logarithmic == "nlog" else 0

    if highest_r2 < 0.4 and score < 0.4: #regression gives a bad model
        complexity = "1"
        k = 0
        p = 0

    seconds = time.time()-start_time
    if not r:
        print("Analysis complete in {} seconds\nComplexity is O({})".format(seconds, complexity))
    else:
        print("Analysis complete in {} seconds".format(seconds))
    if plotting:
        x = numpy.linspace(1, maxsize*1.5, maxsize*10)
        y = func(x, log_model(0), log_model(1))
        yn = y + 0.2*numpy.random.normal(size=len(x))
        #popt, pcov = curve_fit(func, x, yn)
        #plt.plot(x, func(x, *popt), c=(random.random(), random.random(), random.random()), label="log")
        plt.plot(myline, mymodel(myline), c=(random.random(), random.random(), random.random()), label="{}-D polynomial".format(i))
        plt.xlabel('Input size')
        plt.ylabel('Instruction Counter', rotation=90)
        plt.legend(loc='upper left')
        plt.grid()
        plt.show()

    return complexity, k, p


if __name__ == '__main__':
    parser = argparse.ArgumentParser(prog="dig.py")
    parser.add_argument('-trace', help="path/to/traceFile")
    parser.add_argument('-maxdeg', help="maximum deg of polynomial")
    parser.add_argument('-plot', action='store_true', help="To display plots of polynomial regression")
    parser.add_argument('-r', action='store_true', help="recursive program")
    args = parser.parse_args()
    trace_file = Path(args.trace)
    assert(path.exists(trace_file)), "{} doesn't exist".format(trace_file)
    maxdeg = int(args.maxdeg)
    sizes, counters = read_traces(trace_file)
    complexity, k, p = poly_regression(sizes, counters, maxdeg, args.plot, args.r)
    if(args.r):
        print("Polynomial relation: ", complexity)
        print("k={} p={}".format(k, p))

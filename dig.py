#!/usr/bin/env python3
'''Estimates complexity of iterative functions using techniques from DIG'''

from os import listdir, path
import sys
import numpy as np
import math

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

    # #logarithmic fit
    logs = [math.log(c, 2) if c is not 0  else 0 for c in counter] #arbitrary make log(0,2) = 0
    y = np.array(logs)
    z = np.polyfit(x, y, 1)
    logs = z[0]

    return cubic, quadratic, linear, logs

if __name__ == '__main__':
    dir_name = sys.argv[1]

    complexity = "1"
    try:
    # if path.exists("{}/traces".format(dir_name)):
        size, counter = read_traces("{}/traces".format(dir_name))
        cubic, quadratic, linear, logs = get_regression(size, counter)
        print("Cubic {}, quadratic {}, linear {}, logs {}".format(cubic, quadratic, linear, logs))
        if cubic >= 1:
            complexity = "n^3"
        if quadratic >= 1:
            complexity = "n^2"
        elif linear >= 1:
            complexity = "n"
        elif logs >= 1:
            complexity = "log(n)"
    except:
        print("File does not exist: {}/traces".format(dir_name))

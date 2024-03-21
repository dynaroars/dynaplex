#!/usr/bin/env python3

import random
import os
import sys
import tracing

def foo(x, depth):
    tracing.trace(depth, x)
    if x <= 1:
        return
    for i in range(18):
        tracing.increment(depth)
        bar(x-1, depth+1)

def bar(x, depth):
    tracing.trace(depth, x)
    if x <= 1:
        return
    for i in range(2):
        tracing.increment(depth)
        foo(x-1, depth+1)

def main(seen):

    tracing.initialize("mutual_recursion2")
    x = random.randint(2,7)
    if (x in seen):
        return x
    tracing.trace_file(x)
    foo(x, 0)
    tracing.reset()
    return x

if __name__ == '__main__':
    sys.setrecursionlimit(4000)
    seen = set()
    for i in range(10):
        s = main(seen)
        seen.add(s)

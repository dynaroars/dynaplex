#!/usr/bin/env python3
import math
import sys
import argparse

def master_theorem(a, b, k, p=0):
    '''T(n) = a T(n/b) + (n^k(logn)^p)'''

    assert(isinstance(a, int)), a
    assert(isinstance(b, int)), b
    assert(isinstance(k, int)), k
    assert(isinstance(p, int)), p

    c = math.log(a,b) if b is not 1 else 0
    if a > b**k:
        complexity = "n^{}".format(c)
    elif a == b**k:
        if p > -1:
            complexity = "n^{} (logn)^{}".format(c, p+1) if p!=0 else "n^{} logn".format(c)
        elif p == -1:
            complexity = "n^{} log(logn)".format(c)
        elif p < -1:
            complexity = "n^{}".format(c)
    elif a < b**k:
        if p >= 0:
            complexity = "n^{} (logn)^{}".format(k, p)
        else:
            complexity = "n^{}".format(c)

    return complexity

def recurrence(a, b, k, p, rec_call):
    '''T(n) = T(n-a) + T(n-b) + fn'''
    assert(isinstance(a, int)), a
    assert(isinstance(b, int)), b
    assert(a!=0 or b!=0), "Invalid recurrence relation"

    if rec_call > 2:
        complexity = "{}^n".format(rec_call)
    elif a != 0 and b != 0:
        complexity = "2^n"
    elif a == 1 and b == 0:
        if p==0:
            complexity = "n^{}".format(k+1) 
        else:
            complexity = "n^{}(logn)^{}".format(k+1, p)
    else:
        assert false, "failed to solve this recurrence relation"
    return complexity

if __name__ == '__main__':
    parser = argparse.ArgumentParser(prog="recurrence_solver.py")
    parser.add_argument('-format', help="1: T(n) = a T(n/b) + n^k(logn)^p\n2: T(n) = a T(n-b) + n^k(logn)^p\n3: T(n) = T(n/a) + T(n/b) + fn")
    parser.add_argument('-a')
    parser.add_argument('-b')
    parser.add_argument('-k')
    parser.add_argument('-p')
    parser.add_argument('-rec_call')
    args = parser.parse_args()
    fmt = int(args.format)
    a = int(args.a)
    b = int(args.b)
    k = int(args.k)
    p = int(args.p)
    rec_call = int(args.rec_call)

    if fmt == 1:
        complexity = master_theorem(a, b, k, p)
    elif fmt == 2:
        complexity = recurrence(a, b, k, p, rec_call)
    elif fmt == 3: # T(n) = T(n/a) + T(n/b) + fn
        complexity = master_theorem(1, a, k, p) if a<b else masther_theorem(1, b, k, p)

    print("Complexity is O({})".format(complexity))

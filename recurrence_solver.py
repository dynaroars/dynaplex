#!/usr/bin/env python3
import math
import sys
def master_theorem(a, b, k, p=0):
    '''T(n) = a T(n/b) + (n^k(logn)^p)'''

    assert(isinstance(a, int)), a
    assert(isinstance(b, int)), b
    assert(isinstance(k, int)), k
    assert(isinstance(p, int)), p

    c = math.log(b,a) if a is not 1 else 0
    if a > b**k:
        complexity = "n^{}".format(c)
    elif a == b**k:
        if p > -1:
            complexity = "n^{} (logn)^{}".format(c, p+1)
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

def recurrence(a, b, fn):
    '''T(n) = T(n-a) + T(n-b) + fn'''
    assert(isinstance(a, int)), a
    assert(isinstance(b, int)), b

    if a != 0 and b != 0:
        complexity = "2^n"
    elif a == 1 and b == 0:
        complexity = "n{}".format(fn) #fix to output a polynomial

    return complexity

if __name__ == '__main__':
    print("choose format:")
    format = int(input("1) T(n) = a T(n/b) + (n^k(logn)^p)\n2) T(n) = T(n-a) + T(n-b) + fn\n")) #fix to use argument parser
    assert(format == 1 or format == 2), "unsupported recurrence format"

    if format == 1:
        a = int(input("a = "))
        b = int(input("b = "))
        k = int(input("k = "))
        p = int(input("p = "))
        complexity = master_theorem(a, b, k, p)
    else:
        a = int(input("a = "))
        b = int(input("b = "))
        fn = input("fn = ")
        complexity = master_theorem(a, b, fn)
    print("Complexity is O({})".format(complexity))

def foo(x,y):
    if y < 1:
        while x >= 0:
            return rec_foo(x,y)

def rec_foo(x,y):
    if not y < 1:
        while not x >=0:
            return 0
    x = x - y
    return rec_foo(x,y)
        
# https://www.starexec.org/starexec/services/benchmarks/5162484/contents?limit=-1

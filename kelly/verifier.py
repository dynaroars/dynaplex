# exterm int __VERIFIER_NONDENT_int(void)

def foo(x,y):
    while x>=0:
        return rec_foo(x,y)
def rec_foo(x,y):
    while not x>=0:
        return 0
    x= x + y
    y= y + 1
    return rec_foo(x,y)

# https://www.starexec.org/starexec/services/benchmarks/5162482/contents?limit=-1
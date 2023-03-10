def foo(x,y):
    if y>x:
        return rec_foo(x,y)


def rec_foo(x,y):
    if not x>=0:
        return 0
    x= x-y
    return rec_foo(x,y)

    
    # https://www.starexec.org/starexec/services/benchmarks/5162499/contents?limit=-1

    
    
def verfier_nondet_int():
    def foo(x):
        if x > verfier_nondet_int():
            while x != 0:
            
                return rec_foo(x) 
def rec_foo(x):
    if not x > verfier_nondet_int():
        return 0
    x-=1
    return rec_foo(x)



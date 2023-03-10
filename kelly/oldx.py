def foo(x,y,oldx):
    while x>=0 or y>=0:
        oldx = x
        x = oldx - 1
        return re_foo(x,y,oldx)
def re_foo(x,y,oldx):
    while not x>=0 or y>=0:
        oldx = x
        return 0
    
    x = y - 1
    y = oldx - 1
    return re_foo(x,y,oldx)
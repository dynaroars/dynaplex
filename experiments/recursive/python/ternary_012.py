a = {}
def f(k: int) -> None:
    global a
    ### 5_O_None
    for i in range(3):
        a[k] = i
        if a[k] == 0 and a[k+1] == 1 and a[k+2] == 2:
            continue
        if k-1 > 0:
            f(k-1)
    return

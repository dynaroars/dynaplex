def perm_index(a: list[int], sz: int) -> int:
    if sz == 1:
        return 0
    fac = 1
    ### 6_O_None
    for i in range(1, sz):
        fac *= i
    ### 9_S_6
    for i in range(sz):
        if a[i] > a[0]:
            a[i] -= 1

    return (a[0]-1) * fac + perm_index(a[1:], sz-1)

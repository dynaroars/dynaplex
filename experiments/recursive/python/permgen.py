def gen_perm(sz: int, idx: int) -> list:
    if sz == 1:
        return [1]
    fac = 1
    ### 6_O_None
    for i in range(1, sz):
        fac *= i
    a0 = (idx // fac) + 1
    res = [a0]
    tail = gen_perm(sz - 1, idx - (a0 - 1) * fac)
    ### 12_S_6
    for t in tail:
        if t >= a0:
            t += 1
        res.append(t)
    return res

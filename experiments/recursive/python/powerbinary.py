def mypow(a: int, b: int) -> int:
    if b == 0:
        return 1
    t = mypow(a, b // 2)
    if b % 2 == 1:
        return t * t * a
    else:
        return t * t

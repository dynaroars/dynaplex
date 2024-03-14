def balancedTernary(n: int) -> str:
    if n == 0:
        return ""
    r = n % 3
    n = n // 3
    if r == 2:
        r = -1
        n += 1
    c = 'Z' if r == -1 else str(r)

    return balancedTernary(n) + c
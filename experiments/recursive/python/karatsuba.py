def karatsuba(x: int, y: int) -> int:
    if len(str(x)) == 1 or len(str(y)) == 1:
        return x*y
    else:
        n = max(len(str(x)),len(str(y)))
        nby2 = n / 2

        a = int(x / 10**(nby2))
        b = int(x % 10**(nby2))
        c = int(y / 10**(nby2))
        d = int(y % 10**(nby2))

        ac = karatsuba(a, c)
        bd = karatsuba(b, d)
        ad_plus_bc = karatsuba(a+b, c+d) - ac - bd

        prod = ac * 10**(2*nby2) + (ad_plus_bc * 10**nby2) + bd

        return prod

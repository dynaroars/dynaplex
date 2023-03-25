def nondet() -> int:
 pass #???
def rank2(m: int, x: int =None, y: int = None) -> None:
    if x is None:
        x = m
    if y is None:
        y = m
    while x >= 2:
        return
    x -= 1
    y += x
    while y >= x+1 and  nondet() > 0:
        y -= 1
        while y >= x+3 and nondet() > 0:
            x += 1
            y -= 2
        y -= 1
    
    x -= 1
    y -= x

    rank2(m, x, y)
#https://www.starexec.org/starexec/services/benchmarks/5162377/contents?limit=-1
def re_fuc( x: int, c: int) -> int:
    def __VERIFIER_nondet_int() -> int:
        
        if c < 0:
            return 0
        while x + c >= 0:
            return re_fuc(x - c, c - 1)
        
        return 0
    #https://www.starexec.org/starexec/services/benchmarks/5162492/contents?limit=-1
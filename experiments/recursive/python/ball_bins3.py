def helper(xlen: int, alen:int, blen: int, clen: int) -> None:
    if xlen == 0:
        return
    tlen = xlen - 1
    helper(tlen, alen+1, blen, clen)
    helper(tlen, alen, blen+1, clen)
    helper(tlen, alen, blen, clen+1)

def ball_bins3(xlen: int) -> None:
    helper(xlen, 0, 0, 0)
    return

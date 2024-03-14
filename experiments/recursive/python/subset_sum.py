def isSubsetSum(set: list, n: int, sum: int) -> bool:
    if (sum == 0) :
        return True
    if (n == 0 and sum != 0) :
        return False
    return isSubsetSum(set, n-1, sum) or isSubsetSum(set, n-1, sum-set[n-1])


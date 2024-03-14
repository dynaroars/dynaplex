import random
def quicksort(arr: list[int], low: int, high: int) -> list:
    if low < high:
        n = random.randint(1, high-low+1)
        m1 = n + low
        m2 = m1 - 1
        quicksort(arr, m1, high)
        quicksort(arr, low, m2)
    return arr

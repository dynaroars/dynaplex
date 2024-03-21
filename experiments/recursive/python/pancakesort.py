def flip(arr, i):
    start = 0
    ### 4_O_None
    while start < i:
        temp = arr[start]
        arr[start] = arr[i]
        arr[i] = temp
        start += 1
        i -= 1
    return

def findMax(arr, n):
    mi = 0
    ### 15_S_15
    for i in range(n):
        if arr[i] > arr[mi]:
            mi = i
    return mi

def pancakeSort(arr: list[int], n: int) -> None:
    if n <= 1:
        return
    mi = findMax(arr, n)
    if mi != n - 1:
        flip(arr, mi)
        flip(arr, n - 1)
    pancakeSort(arr, n - 1)

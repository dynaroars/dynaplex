def bubblesort(arr: list[int]) -> list:
    n = len(n)
    if n==1:
        return arr
    ### 6_O_None
    for i in range(n-1):
        if arr[i]>arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]

    return bubblesort(arr)


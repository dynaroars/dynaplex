def insertion_sort(arr: list[int]) -> None:
    if len(arr) <= 1:
        return
    insertion_sort(arr[:-1])
    key = arr[-1]
    j = len(arr) - 2
    ### 8_O_None
    while j >= 0 and arr[j] > key:
        arr[j+1] = arr[j]
        j -= 1
    arr[j+1] = key
    return


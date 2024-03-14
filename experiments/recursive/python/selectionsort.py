def selection_sort_recursive(arr: list) -> list:
    if len(arr) <= 1:
        return arr
    min_index = arr.index(min(arr))
    arr[0], arr[min_index] = arr[min_index], arr[0]
    return [arr[0]] + selection_sort_recursive(arr[1:])

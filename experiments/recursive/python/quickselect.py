def partition(arr, l, r):
    x = arr[r]
    i = l
    ### 5_O_None
    for j in range(l, r):
        if arr[j] <= x:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    arr[i], arr[r] = arr[r], arr[i]
    return i

def kthSmallest(arr: list[int], l: int, r: int, k: int) -> int:
    if k > 0 and k <= r - l + 1:
        index = partition(arr, l, r)
        if index - l == k - 1:
            return arr[index]
        if index - l > k - 1:
            return kthSmallest(arr, l, index - 1, k)
        return kthSmallest(arr, index + 1, r, k - index + l - 1)
    return float('inf')

if __name__ == '__main__':
    arr = [12, 3, 5, 7, 4, 19, 26]
    n = len(arr)
    k = 87
    print("K'th smallest element is", kthSmallest(arr, 0, n-1, k))
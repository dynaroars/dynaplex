def merge_sort(myList: list) -> list:
    if len(myList) > 1:
        mid = len(myList) // 2
        left = myList[:mid]
        right = myList[mid:]
        merge_sort(left)
        merge_sort(right)

        i = 0
        j = 0
        k = 0
        ### 13_O_None
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
              myList[k] = left[i]
              i += 1
            else:
                myList[k] = right[j]
                j += 1
            k += 1
        ### 22_S_13
        while i < len(left):
            myList[k] = left[i]
            i += 1
            k += 1
        ### 26_S_13
        while j < len(right):
            myList[k]=right[j]
            j += 1
            k += 1
    return

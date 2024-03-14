def sortedInsert(s, element):
    if len(s) == 0 or element > s[-1]:
        s.append(element)
        return
    else:
        temp = s.pop()
        sortedInsert(s, element,)
        s.append(temp)

def sortStack(s: list[int]) -> list:
    if len(s) != 0:
        temp = s.pop()
        sortStack(s)
        sortedInsert(s, temp)
    return s

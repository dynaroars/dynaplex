N = int(1e5)
tree = [[] for _ in range(5 * N)]

def merge(a, b):
    r = []
    i = 0
    j = 0
    ### 9_O_None
    while i < len(a) or j < len(b):
        va = a[i] if i < len(a) else float('inf')
        vb = b[j] if j < len(b) else float('inf')
        if va < vb:
            r.append(va)
            i += 1
        else:
            r.append(vb)
            j += 1
    return r

def build_tree(R: int, L: int, x: int, a: list) -> None:
    global tree
    if L == R:
        tree[x].append(a[L])
        return
    m = (L + R) // 2
    build_tree(m, L, 2*x)
    build_tree(R, m+1, 2*x+1)
    tree[x] = merge(tree[2*x], tree[2*x+1])

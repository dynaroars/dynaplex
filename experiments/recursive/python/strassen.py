def new_matrix(r, c):
    """Create a new matrix filled with zeros."""
    matrix = [[0 for row in range(r)] for col in range(c)]
    return matrix

def split(matrix):
    """Split matrix into quarters."""
    a = b = c = d = matrix
    global counter

    while len(a) > len(matrix)/2:
        a = a[:len(a)//2]
        b = b[:len(b)//2]
        c = c[len(c)//2:]
        d = d[len(d)//2:]

    while len(a[0]) > len(matrix[0])//2:
        for i in range(len(a[0])//2):
            a[i] = a[i][:len(a[i])//2]
            b[i] = b[i][len(b[i])//2:]
            c[i] = c[i][:len(c[i])//2]
            d[i] = d[i][len(d[i])//2:]

    return a, b, c, d
   
def add_matrix(a, b):
    if type(a) == int:
        d = a + b
    else:
        d = []
        for i in range(len(a)):
            c = []
            for j in range(len(a[0])):
                c.append(a[i][j] + b[i][j])
            d.append(c)
    return d


def subtract_matrix(a, b):
    if type(a) == int:
        d = a - b
    else:
        d = []
        for i in range(len(a)):
            c = []
            for j in range(len(a[0])):
                c.append(a[i][j] - b[i][j])
            d.append(c)
    return d


def strassen(x: list[int], y: list[int], n: int) -> list:
    if n == 1:
        z = [[0]]
        z[0][0] = x[0][0] * y[0][0]
        return z
    else:
        a, b, c, d = split(x)
        e, f, g, h = split(y)
        p1 = strassen(a, subtract_matrix(f, h), n/2)
        p2 = strassen(add_matrix(a, b), h, n/2)
        p3 = strassen(add_matrix(c, d), e, n/2)
        p4 = strassen(d, subtract_matrix(g, e), n/2)
        p5 = strassen(add_matrix(a, d), add_matrix(e, h), n/2)
        p6 = strassen(subtract_matrix(b, d), add_matrix(g, h), n/2)
        p7 = strassen(subtract_matrix(a, c), add_matrix(e, f), n/2)
        z11 = add_matrix(subtract_matrix(add_matrix(p5, p4), p2), p6)
        z12 = add_matrix(p1, p2)
        z21 = add_matrix(p3, p4)
        z22 = add_matrix(subtract_matrix(subtract_matrix(p5, p3), p7), p1)
        z = new_matrix(len(z11)*2, len(z11)*2)
        ### 73_O_None
        for i in range(len(z11)):
            ### 75_N_73
            for j in range(len(z11)):
                z[i][j] = z11[i][j]
                z[i][j+len(z11)] = z12[i][j]
                z[i+len(z11)][j] = z21[i][j]
                z[i+len(z11)][j+len(z11)] = z22[i][j]
        return z


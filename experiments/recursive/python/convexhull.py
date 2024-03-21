mid = [0, 0]

def quad(p):
    if p[0] >= 0 and p[1] >= 0:
        return 1
    if p[0] <= 0 and p[1] >= 0:
        return 2
    if p[0] <= 0 and p[1] <= 0:
        return 3
    return 4

def orientation(a, b, c):
	res = (b[1] - a[1]) * (c[0] - b[0]) - (c[1] - b[1]) * (b[0] - a[0])
	if res == 0:
		return 0
	if res > 0:
		return 1
	return -1

def compare(p1, q1):
	global mid
	p = (p1[0] - mid[0], p1[1] - mid[1])
	q = (q1[0] - mid[0], q1[1] - mid[1])

	one = quad(p)
	two = quad(q)

	if one != two:
		return one < two
	return p[1] * q[0] < q[1] * p[0]

def merger(a, b):
    n1 = len(a)
    n2 = len(b)

    ia = 0
    ib = 0
    ### 39_S_137
    for i in range(1, n1):
        if a[i][0] > a[ia][0]:
            ia = i
    ### 43_S_137
    for i in range(1, n2):
        if b[i][0] < b[ib][0]:
            ib = i
    inda = ia
    indb = ib
    done = False
    ### 50_S_137
    while not done:
        done = True
        ### 53_N_50
        while orientation(b[indb], a[inda], a[(inda + 1) % n1]) >= 0:
            inda = (inda + 1) % n1
        ### 56_S_53
        while orientation(a[inda], b[indb], b[(n2 + indb - 1) % n2]) <= 0:
            indb = (n2 + indb - 1) % n2
            done = False
    uppera = inda
    upperb = indb
    inda = ia
    indb = ib
    done = False
    ### 65_S_137
    while not done:
        done = True
        ### 68_N_65
        while orientation(a[inda], b[indb], b[(indb + 1) % n2]) >= 0:
            indb = (indb + 1) % n2
        ### 71_S_68
        while orientation(b[indb], a[inda], a[(n1 + inda - 1) % n1]) <= 0:
            inda = (n1 + inda - 1) % n1
            done = False
    lowera = inda
    lowerb = indb
    ret = []
    ind = uppera
    ret.append(a[uppera])
    ### 80_S_137
    while ind != lowera:
        ind = (ind + 1) % n1
        ret.append(a[ind])
    ind = lowerb
    ret.append(b[lowerb])
    ### 86_S_137
    while ind != upperb:
        ind = (ind + 1) % n2
        ret.append(b[ind])

    return ret

def bruteHull(a):
    s = set()
    ### 95_S_137
    for i in range(len(a)):
        ### 97_N_95
        for j in range(i + 1, len(a)):
            x1, x2 = a[i][0], a[j][0]
            y1, y2 = a[i][1], a[j][1]
            a1 = y1 - y2
            b1 = x2 - x1
            c1 = x1 * y2 - y1 * x2
            pos = 0
            neg = 0
            ### 106_N_97
            for k in range(len(a)):
                if a1 * a[k][0] + b1 * a[k][1] + c1 <= 0:
                    neg += 1
                if a1 * a[k][0] + b1 * a[k][1] + c1 >= 0:
                    pos += 1
            if pos == len(a) or neg == len(a):
                s.add(a[i])
                s.add(a[j])
    ret = []
    ### 116_S_137
    for e in s:
        ret.append(e)
    mid = [0, 0]
    n = len(ret)
    ### 121_S_137
    for i in range(n):
        mid[0] += ret[i][0]
        mid[1] += ret[i][1]
        ret[i] = (ret[i][0] * n, ret[i][1] * n)
    ret.sort(key=lambda x: compare(x, mid))
    ### 127_S_137
    for i in range(n):
        ret[i] = (ret[i][0] // n, ret[i][1] // n)
    return ret

def divide(a: list[tuple[int, int]]) -> list[tuple[int, int]]:
    if len(a) <= 5:
        return bruteHull(a)
    left = []
    right = []
    ### 137_O_None
    for i in range(len(a) // 2):
        left.append(a[i])
    ### 137_S_137
    for i in range(len(a) // 2, len(a)):
        right.append(a[i])
    left_hull = divide(left)
    right_hull = divide(right)
    return merger(left_hull, right_hull)

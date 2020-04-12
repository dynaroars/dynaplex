import sys


def read_logs(filename):
    ''' returns a list of integers that represent lengths ... '''
    with open(filename) as file:
        lines = [line.rstrip('\n') for line in file]
    return lines



def calc_factors():
    ''' calc b '''
    # lengths = [line[1] for line in read_logs(sys.argv[1])]
    lengths = read_logs(sys.argv[1])
    factors = []
    for i, val in enumerate(lengths):
        if i == 0:
            continue
        factor = int(lengths[i-1])//int(val)
        factors.append(factor)
    print(str(factors))
    return factors

factors = calc_factors()
b = max(factors, key=factors.count)
print('b: ', b)

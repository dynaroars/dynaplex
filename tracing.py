import random

def int_list():
    n = random.randint(1, 200)
    return [random.randint(0, 1000) for _ in range(n)]

def int_tuple_list():
    n = random.randint(1, 200)
    return [(random.randint(0, 1000), random.randint(0, 1000)) for _ in range(n)]

# function to generate a random binary tree
def node():
    size = random.randint(1, 200)
    root = Node(random.randint(-size, size))
    root.populate(size)
    return root

def integer():
    return random.randint(0, 1000)

def string():
    return ''.join(random.choices('abcdefghijklmnopqrstuvwxyz', k=random.randint(1, 200)))



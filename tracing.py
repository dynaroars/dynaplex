import random

def int_list():
    n = random.randint(1, 200)
    return [random.randint(0, 1000) for _ in range(n)]

def int_tuple_list():
    n = random.randint(1, 200)
    return [(random.randint(0, 1000), random.randint(0, 1000)) for _ in range(n)]

# function to generate a random binary tree
def node():
    class Node:
        def __init__(self, data):
            self.left = None
            self.right = None
            self.data = data

        def insert(self, data):
            if self.data:
                if size(self.left) < size(self.right):
                    if self.left is None:
                        self.left = Node(data)
                    else:
                        self.left.insert(data)
                else:
                    if self.right is None:
                        self.right = Node(data)
                    else:
                        self.right.insert(data)
            else:
                self.data = data
            assert(abs(size(self.right)-size(self.left)) <= 1)

        def populate(self, size):
            for i in range(size):
                val = random.randint(-size, size)
                self.insert(val)
            return

        def size(node):
            if node is None:
                return 0
            else:
                return (size(node.left) + 1 + size(node.right))
    
    size = random.randint(1, 200)
    root = Node(random.randint(-size, size))
    root.populate(size)
    return root

def integer():
    return random.randint(0, 1000)



import random
import os
import trace

counter = 0

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
        assert (abs(size(self.right) - size(self.left)) <= 1)

    def populate(self, size):
        for i in range(size):
            val = random.randint(-size, size)
            self.insert(val)
        return

    def PrintTree(self):
        if self.left:
            self.left.PrintTree()
        print(self.data)
        if self.right:
            self.right.PrintTree()

def size(node):
    if node is None:
        return 0
    else:
        return (size(node.left) + 1 + size(node.right))

def postorder(root, depth, file):
    trace.tracing.trace(depth, root)
    trace.tracing.increment(depth)

    if root is None:
        return

    postorder(root.left, depth + 1, file)
    postorder(root.right, depth + 1, file)

    # print("Visited node: {}, Depth: {}".format(root.data, depth))
    # with open(file, 'a') as f:
    #     print("{};{}".format(depth, size(root)), file=f)
    # if depth == 0:
    #     global counter
    #     counter = counter + 1

def inorder(root, depth, file):
    trace.tracing.trace(depth, root)
    trace.tracing.increment(depth)

    if root is None:
        return

    inorder(root.left, depth + 1, file)

    # print("Visited node: {}, Depth: {}".format(root.data, depth))
    # with open(file, 'a') as f:
    #     print("{};{}".format(depth, size(root)), file=f)
    # if depth == 0:
    #     global counter
    #     counter = counter + 1

    inorder(root.right, depth + 1, file)

def copy(root, height, depth, file):
    trace.tracing.trace(depth, root)
    trace.tracing.increment(depth)

    if root is None:
        return

    copy(root.left, height + 1, depth + 1, file)
    copy(root.right, height + 1, depth + 1, file)

    # print("Copied node: {}, Depth: {}, Height: {}".format(root.data, depth, height))
    # with open(file, 'a') as f:
    #     print("{};{}".format(depth, height), file=f)
    # if depth == 0:
    #     global counter
    #     counter = counter + 1

def main():
    global counter
    counter = 0
    depth = 0
    siz = random.randint(2, 500)
    root = Node(random.randint(-10, 10))
    root.populate(siz)
    size = size(root)

    path = "./postorder_bt"
    try:
        os.mkdir(path)
    except OSError as error:
        pass

    with trace.Trace(trace=0, count=True) as tracer:
        postorder(root, depth, os.path.join(path, "output-{}".format(siz)))

    tracer_results

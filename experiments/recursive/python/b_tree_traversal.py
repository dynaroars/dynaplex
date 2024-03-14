import random
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

# Recursive function to perform postorder traversal on the tree
def postorder(root: Node) -> None:
    if root is None:
        return
    postorder(root.left)
    postorder(root.right)
    return

# Recursive function to perform inorder traversal on the tree
def inorder(root: Node) -> None:
    if root is None:
        return
    inorder(root.left)
    inorder(root.right)
    return

# Recursive function to copy the tree
def copy(root: Node, height: int) -> None:
    if root is None:
        return
    copy(root.left, height+1)
    copy(root.right, height+1)
    return



class Node:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.val = val

# print inorder traversal  
def inorder(root):
    if root == None:
        return 
    inorder(root.left)
    print(root.val)
    inorder(root.right)

# print level order traversal
def level_order(root):
    q = []
    q.append(root)
    
    while len(q) != 0:
        parent = q[0]
        q.pop(0)
        print(parent.val)
        if parent.left != None:
            q.append(parent.left)
        if parent.right != None:
            q.append(parent.right)

# Determine maximum height
def height(root):
    if root == None:
        return 0
    left = height(root.left)
    right = height(root.right)
    return max(left, right) + 1


def main():
    val = int(input())
    root = Node(val)

    # level order input
    q = []
    q.append(root)
    while len(q) != 0:
        parent = q[0]
        q.pop(0)
        a = int(input())
        b = int(input())
        parent.left = None
        parent.right = None

        if a != -1:
            parent.left = Node(a)
            q.append(parent.left)
        if b != -1:
            parent.right = Node(b)
            q.append(parent.right)


    # inorder(root)
    # level_order(root)
    print(height(root))

main()
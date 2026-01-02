# 1 2 6 3 4 x x x 5 x x x x

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
    
    def __str__(self):
        return f"{self.val}"

def build_tree(string):
    """
    function for building tree from a string with values and x for null.
    e.g.: 1 2 6 3 4 x x x 5 x x x x
    
    :param string: string that has tree structure in level order traversal
    :returns Node: head of the tree
    """
    arr = [Node(int(v)) if v != 'x' else None for v in string.split()]
    n = len(arr); i = 0
    for k in range(n):
        cur = arr[k]
        if not cur: continue
        cur.left = arr[i*2 + 1] if i*2+1 < n else None
        cur.right = arr[i*2 + 2] if i*2+2 < n else None
        i += 1
    return arr[0]

def print_tree(head: Node):
    if not head:
        return

    q = [head]
    ans = ""
    while q:
        top = q.pop(0)
        if top.left: q.append(top.left)
        if top.right: q.append(top.right)

        ans += f"{top.val} "
    
    return ans

# head = build_tree("1 2 6 3 4 x x x 5 x x x x")
# print(head, head.left.left.right, head.right.right)
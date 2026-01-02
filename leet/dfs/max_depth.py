from leet.tree import Node, build_tree

def max_depth(head: Node):
    if head is None:
        return -1
    
    left = max_depth(head.left)
    right = max_depth(head.right)

    return max(left, right) + 1



head = build_tree("1 2 6 3 4 x x x 5 x x x x")
# head = build_tree("x")
print(max_depth(head))
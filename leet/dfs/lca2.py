from leet.tree import Node, build_tree, print_tree

def lca(root: Node, node1: Node, node2: Node) -> Node:
    if root is None:
        return None
    left_side = lca(root.left, node1, node2)
    right_side = lca(root.right, node1, node2)

    if root is node1 or root is node2:
        return root
    
    if left_side and right_side:
        return root

    if left_side or right_side:
        return left_side or right_side

    return left_side or right_side

head = build_tree("1 2 3 x 4 5 6 x x 7 8")
# head = build_tree("1")
# print(lca(head, head, head))
# print(lca(head, head.right.left.left, head.right.left))
print(lca(head, head.right.left.left, head.right.right))
# print(lca(head, head.left.right, head.left))


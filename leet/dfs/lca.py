from leet.tree import Node, build_tree

def lca_on_bst(root: Node, p, q):
    if p < root.val and q < root.val:
        return lca_on_bst(root.left, p, q)
    elif p > root.val and q > root.val:
        return lca_on_bst(root.right, p, q)
    return root

head = build_tree("8 5 10 2 6 x 14 x 3")
print(lca_on_bst(head, 2, 3))

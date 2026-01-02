from leet.tree import Node, build_tree

def dfs_validity(root: Node, min_val, max_val):
    if root is None:
        return True
    
    if not (min_val < root.val < max_val):
        return False
    
    left = dfs_validity(root.left, min_val, root.val)
    right = dfs_validity(root.right, root.val, max_val)

    return left and right

head = build_tree("6 4 8 3 8")
print(head)

print(dfs_validity(head, float("-inf"), float("inf")))
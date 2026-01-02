from leet.tree import Node, build_tree

def subtree_of_another_tree(root: Node, sub_root: Node) -> bool:
    # WRITE YOUR BRILLIANT CODE HERE
    # if sub_root is false, it's a subtree regardless of whether the root is null or not
    if not sub_root:
        return True
    # now that the sub_root is non-empty, it is not a subtree if the root is empty
    if not root:
        return False
    
    if same_tree(root, sub_root):
        return True
    
    return (subtree_of_another_tree(root.left, sub_root) or subtree_of_another_tree(root.right, sub_root))

def same_tree(root, sub):
    # if both are none, they are the same
    if root is None and sub is None:
        return True
    # if at least one of them is None, they are not the same tree
    if root is None or sub is None:
        return False
    
    left = same_tree(root.left, sub.left)
    right = same_tree(root.right, sub.right)

    return left and right and (root.val == sub.val)

# head = build_tree("1 2 3 4 5 x 6 8 7")
head = build_tree("3 4 5 1 2 x 3")
sub_head = build_tree("3")

print(subtree_of_another_tree(head, sub_head))
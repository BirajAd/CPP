from leet.tree import Node, build_tree, print_tree

def invert_binary_tree(head: Node):
    if head is None:
        return None

    left = invert_binary_tree(head.left)
    right = invert_binary_tree(head.right)
    
    temp = left
    head.left = right
    head.right = temp

    return head

head = build_tree("4 2 7 1 3 6 9")

invert_binary_tree(head)
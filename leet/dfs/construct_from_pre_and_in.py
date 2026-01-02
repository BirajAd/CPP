from leet.tree import Node, build_tree
import time

def construct_root(preorder, pre_idx, inorder_st, size, idxs):
    if size <= 0:
        return None
    
    root_val = preorder[pre_idx]
    root_node = Node(root_val)

    # wherever the value sits in inorder list
    split_pt = idxs[root_val]
    left_tree_size = split_pt - inorder_st

    left = construct_root(preorder, pre_idx+1, inorder_st, left_tree_size, idxs)

    # right_sub_size = size - split_pt - 1
    right = construct_root(preorder, pre_idx+1+left_tree_size, split_pt+1, size - left_tree_size - 1, idxs)

    root_node.left = left; root_node.right = right
    
    return root_node
    

def construct_binary_tree(preorder: list[int], inorder: list[int]):
    # ASSUMPTION len(preorder) == len(inorder)
    assert len(preorder) == len(inorder), "Length has to be equal"
    n = len(preorder)
    idxs = {
        x: i for i, x in enumerate(inorder)
    }
    return construct_root(preorder, 0, 0, n, idxs)

# 3 9 4 8 20 15 7
# 4 9 8 3 15 20 7
pre = input().split()
inorder = input().split()

head = construct_binary_tree(pre, inorder)
print(head, head.left, head.right)

def construct_root_thingy(preorder, pre_idx, inorder_st, size, idxs):
    if size <= 0:
        return None

    the_val = preorder[pre_idx]
    val_idx = idxs[the_val]

    left_subtree_size = val_idx - inorder_st
    the_root = Node(the_val)

    left = construct_root_thingy(preorder, pre_idx+1, inorder_st, left_subtree_size, idxs)
    right = construct_root_thingy(preorder, left_subtree_size+pre_idx+1, val_idx+1, size-left_subtree_size - 1 , idxs)

    the_root.left = left; the_root.right = right

    return the_root
    
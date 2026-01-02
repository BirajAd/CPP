from leet.tree import Node, build_tree

def visible_tree_node(root: Node):
    def dfs(root: Node, max_yet: int):
        if root is None:
            return 0
        
        total = 0
        if root.val >= max_yet:
            total += 1
        
        left_max = dfs(root.left, max(root.val, max_yet))
        right_max = dfs(root.right, max(root.val, max_yet))
        # print(root.val, left_max, right_max, total)

        return total + left_max + right_max
    return dfs(root, float("-inf"))

def height(root: Node):
    if root is None:
        return 0
    
    left = height(root.left)
    right = height(root.right)

    if left < 0 or right < 0:
        return -1
    
    if abs(right - left) > 1:
        return -1

    return max(left, right) + 1

def is_balanced_bt(root: Node):
    # returns => (balanced, height)
    return height(root) >= 0

head = build_tree("1 2 3 4 5 x 6 8 7")
# print(visible_tree_node(head))
print(is_balanced_bt(head))
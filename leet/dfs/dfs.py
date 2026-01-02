from leet.tree import Node, build_tree

# find target given the head of a tree
def dfs(head: Node, target):
    if head is None:
        return None
    if head.val == target:
        return head
    
    left = dfs(head.left, target)
    if left is not None:
        return left
    
    return dfs(head.right, target)

def find_max_val(head: Node):
    MIN_VAL = float("-inf")
    if head is None:
        return MIN_VAL

    left = find_max_val(head.left)
    right = find_max_val(head.right)

    return max(head.val, left, right)


head = build_tree("1 2 6 3 4 x x x 5 x x x x")
print(find_max_val(head))
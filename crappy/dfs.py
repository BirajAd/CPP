# find combinations of words with 'a' and 'b'
class Node:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right
  
  def __str__(self):
    return f"Val: {self.val}"

a = Node(1, Node(2), Node(6))
a.left.left = Node(3)
a.left.left.right = Node(5)
a.left.right = Node(4)
a.right.left = Node(1)
a.right.right = Node(7)
# print(a)

def pre_order(node: Node):
  if node is None:
    return
  print(node)
  if node.left:
    pre_order(node.left)
  pre_order(node.right)

def post_order(node: Node):
  if node is None:
    return
  print(node)
  if node.right:
    post_order(node.right)
  post_order(node.left)

def order_level(node: Node):
  queue = [node]
  while(queue):
    popped_node = queue.pop(0)
    print(popped_node)
    if popped_node.left: queue.append(popped_node.left)
    if popped_node.right: queue.append(popped_node.right)

# pre_order(a)
# post_order(a)
order_level(a)


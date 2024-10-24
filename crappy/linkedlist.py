# find combinations of words with 'a' and 'b'
class Node:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next
  
  def __str__(self):
    return f"{self.val}"
  
a = [1,2,3,4,5,6,7]

def make_linked_list(a: list):
  if not a:
    return None
  head = Node(a[0])
  ref = head
  for i in range(1, len(a)):
    ref.next = Node(a[i])
    ref = ref.next
  return head

def print_linked_list(a: Node):
  while a:
    print(a)
    a = a.next

def reverse_linked_list(node: Node):
  prev_node = Non
  while(node):
    if node.next:
      next_node = node.next.next
      node.next.next = node
      node.next = prev_node
      prev_node = node.next
      node = next_node
  return node

ll = make_linked_list(a)
print_linked_list(ll)
r_ll = reverse_linked_list(ll)
print_linked_list(r_ll)
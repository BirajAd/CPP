class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None
    
    def __str__(self):
        return f"{self.val}"

arr = [1,2,2,3,3,None,None,4,4]
arr1 = [3,9,20,23,3,15,7, 4, 7, 10, None, 12]

def inorder_traversal(head: Node):
    if not head:
        return
    inorder_traversal(head.left)
    print(head)
    inorder_traversal(head.right)

def height(root: Node):
    if not root:
        return (True, -1)
    
    l = height(root.left)[1]
    r = height(root.right)[1]

    return (abs(l-r) <= 1, max(l, r) + 1)

def arr_to_btree(arr):
    head = Node(arr[0])
    q = [head]
    for idx, n in enumerate(arr):
        if not n:
            continue
        tmp = q.pop(0)
        l = 2*idx+1
        r = 2*idx+2
        if l < len(arr): 
            left = Node(arr[l])
            tmp.left = left
            q.append(left)
        if r < len(arr):
            right = Node(arr[r])
            tmp.right = right
            q.append(right)
    return head

# head = arr_to_btree(arr1)

# print(height(head))

class MyQueue:

    def __init__(self):
        self.s1 = []
        self.s2 = []
        self.size = 0
        self.front = None

    def push(self, x: int) -> None:
        if self.size == 0:
            self.front = x
        self.size += 1
        self.s1.append(x)

    def pop(self) -> int:
        popped = None
        while self.s1:
            popped = self.s1.pop()
            self.s2.append(popped)
        popped = self.s2.pop() # remove the first one from s2
        if self.s2:
            self.front = self.s2.pop()
            self.s2.append(self.front)
        else:
            self.front = None
        self.size -= 1
        while self.s2:
            self.s1.append(self.s2.pop())
        return popped
        

    def peek(self) -> int:
        return self.front
        

    def empty(self) -> bool:
        return self.size == 0
        

a = MyQueue()
print(a.push(1))
print(a.push(2))
print(a.size)
print(a.pop())
print(a.peek())
print(a.peek())
print(a.empty())

from leet.tree import Node, build_tree

def deserialize_tree(st):
    def dfs(val):
        num = next(val, None)
        if not num or num == "x":
            return None
        cur = Node(num)
        cur.left = dfs(val)
        cur.right = dfs(val)
        return cur
    arr = iter(st.split())
    return dfs(arr)

def serialize_tree(head):
    def dfs(head, ans=""):
        if not head:
            return ans + "x "
        left = dfs(head.left, ans + f"{head.val} ")
        right = dfs(head.right, left)

        return right
    return dfs(head).strip()


string = "6 2 0 x x 4 3 x x 5 x x 8 7 x x 9 x x"
head = deserialize_tree(string)
str_val = serialize_tree(head)

assert string == str_val, "Deserialize didn't work as expected"

print(str_val)
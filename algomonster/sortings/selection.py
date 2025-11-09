
# 5 3 1 2 4
def insertion_sort(arr):
  n = len(arr)
  if n <= 1: return arr
  for i in range(1,n):
    curr = i
    while curr > 0 and arr[curr] < arr[curr-1]:
      # swap the two
      print(arr)
      arr[curr], arr[curr-1] = arr[curr - 1], arr[curr]
      curr -= 1
  return arr

arr = [5,2,1,3,4]
# print(insertion_sort(arr))

# 5 3 1 2 4
def selection_sort(arr):
  n = len(arr)
  for i in range(n):
    minn = arr[i]; min_idx = i
    for j in range(i+1, n):
      if arr[j] < minn:
        minn = arr[j]; min_idx = j
    print(arr)
    arr[min_idx], arr[i] = arr[i], arr[min_idx]
  return arr

# 5 3 1 2 4
def bubble_sort(arr):
  n = len(arr)
  for i in range(n):
    swapped = False
    for j in range(1, n):
      if arr[j-1] > arr[j]:
        arr[j-1], arr[j] = arr[j], arr[j-1]
        swapped = True
    if not swapped: return arr
  
  return arr

# 5 3 1 2 4
def merge_sort(arr):
  n = len(arr)
  if n <= 1:
    return arr
  mid = n // 2
  a, b = arr[:mid], arr[mid:]
  # print(f"Dividing: \n{a}\t{b}")
  a = merge_sort(a)
  b = merge_sort(b)
  # print(f"Dividing: \n{a}\t{b}")
  result_list = []
  left_ptr, right_ptr = 0, 0

  # mid -> upto the mid
  # n - mid -> leftover element count.
  # e.g [5,3], [1,2,4]
  # mid = 2, n-mid = 3 (total elements in second half)
  while left_ptr < mid or right_ptr < (n - mid):
    # left array is empty
    if left_ptr == mid:
      result_list.append(b[right_ptr])
      right_ptr += 1
    # right array is empty
    elif right_ptr == (n - mid):
      result_list.append(a[left_ptr])
      left_ptr += 1
    elif a[left_ptr] < b[right_ptr]:
      result_list.append(a[left_ptr])
      left_ptr += 1
    else:
      result_list.append(b[right_ptr])
      right_ptr += 1

  return result_list


inp = input("copy paste your list ")
print(merge_sort(list(map(int, inp.split(",")))))
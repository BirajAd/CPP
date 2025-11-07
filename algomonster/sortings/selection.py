
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



inp = input("copy paste your list ")
bubble_sort(list(map(int, inp.split(","))))
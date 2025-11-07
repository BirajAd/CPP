
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
print(insertion_sort(arr))

def bubble_sort(arr):
  return NotImplemented
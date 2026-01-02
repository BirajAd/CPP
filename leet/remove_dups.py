def remove_duplicates(arr: list[int]) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    # 1, 1, 1, 2, 2
    first_p, sec_p = 0, 0; n = len(arr)
    ans = 1
    while sec_p < n:
        if arr[sec_p] == arr[first_p]:
            sec_p += 1
            continue
        else:
            first_p += 1
            arr[sec_p], arr[first_p] = arr[first_p], arr[sec_p]
            ans += 1; sec_p += 1
            
    return ans

def move_zeros(nums: list[int]) -> None:
    # WRITE YOUR BRILLIANT CODE HERE
    slow = 0; n = len(nums)
    for fast in range(n):
        if nums[fast] != 0:
            nums[fast], nums[slow] = nums[slow], nums[fast]
            slow += 1
    return slow

# a = list(map(int, input().split()))

# print(a, move_zeros(a))
def is_palindrome(s: str) -> bool:
    # WRITE YOUR BRILLIANT CODE HERE
    st, en = 0, len(s)-1
    while st < en:
        if not s[st].isalnum(): st += 1; continue
        if not s[en].isalnum(): en -= 1; continue
        if s[st].lower() != s[en].lower():
            return False
        st += 1; en -= 1
    return True

print(is_palindrome("Was it a car or a cat I saw?"))
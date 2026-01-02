import time
from collections import defaultdict

def container_with_most_water(arr: list[int]) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    l, r = 0, len(arr)-1
    max_water = 0
    while l < r:
        water = min(arr[l], arr[r]) * (r-l)
        max_water = max(max_water, water)
        if l <= r:
            l += 1
        else:
            r += 1
    return max_water

# a = [1,8,6,2,5,4,8,3,7]
# a = [1, 2, 3, 7, 4, 1]
# print(container_with_most_water(a))
# a = list(map(int, input().split()))
# k = eval(input())

# [1, 2, 3, 7, 4, 1], k = 3, ans => 14
def subarray_sum_fixed(nums: list[int], k: int) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(nums); max_sum = float("-inf")
    l = 0; cur_sum = 0
    for r in range(n):
        cur_sum += nums[r]
        if l > 0:
            cur_sum = cur_sum - nums[l-1]
        if r - l + 1 == k:
            print(f"{l} - {r} => {cur_sum}")
            max_sum = max(cur_sum, max_sum)
            l += 1
        
    return max_sum

# print(subarray_sum_fixed(a, k))

# original = "cbaebabacd", check = "abc"
def find_all_anagrams(original: str, check: str) -> list[int]:
    # WRITE YOUR BRILLIANT CODE HERE
    k = len(check); n = len(original); ans = []
    ascii_pos = lambda x: ord(x) - ord('a')
    c_window = [0] * 26
    cur_window = [0] * 26
    for i in range(k):
        c_window[ascii_pos(check[i])] += 1
        cur_window[ascii_pos(original[i])] += 1
    
    if c_window == cur_window:
        ans.append(0)

    l = 1
    while l <= (n-k):
        # update count on current window
        print(l, (n-k), original[l: l+k])
        cur_window[ascii_pos(original[l-1])] -= 1
        cur_window[ascii_pos(original[l+k-1])] += 1

        # s_str = original[l: l+k]
        if c_window == cur_window:
            ans.append(l)
        l += 1

    return ans
# print(find_all_anagrams(a, k))

# print(are_anagrams("af", "fa"))
# 1 6 3 1 2 4 5
# 10
def subarray_sum_longest(nums: list[int], target: int) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(nums); cur_sum = 0
    l = 0; max_len = 0
    for r in range(n):
        cur_sum += nums[r]
        if cur_sum < target:
            max_len = max(max_len, r-l+1)
        else:
            if cur_sum == target:
                max_len = max(max_len, r-l+1)
            cur_sum -= nums[l]
            l += 1

    return max_len

# abcdbea
def longest_substring_without_repeating_characters(s: str) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(s); st = set(); l=0
    ans = 0
    for r in range(n):
        if s[r] in st:
            while s[r] in st:
                st.remove(s[l])
                l += 1
        st.add(s[r])
        ans = max(ans, r-l+1)
    return ans

# 1 4 1 7 3 0 2 5
# 10
def subarray_sum_shortest(nums: list[int], target: int) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(nums); cur_sum = 0; l = 0
    ans = float("inf")
    for r in range(n):
        cur_sum += nums[r]
        while cur_sum >= target:
            ans = min(ans, r-l+1)
            cur_sum -= nums[l]
            l += 1

    if ans == float("inf"): return 0
            
    return ans

def least_consecutive_cards_to_match(cards: list[int]) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(cards); l = 0
    st = set(); ans = n+1
    for r in range(n):
        while cards[r] in st:
            st.remove(cards[l])
            ans = min(ans, r-l+1)
            if ans == 2: return ans # can't get better
            l += 1
        st.add(cards[r])
    if ans == n+1: return -1
    return ans

# [1, -20, -3, 30, 5, 4]
#  1, -19, -22, 8, 13, 17
# cur - target = needed
def subarray_sum(arr: list[int], target: int) -> list[int]:
    n = len(arr); cur_sum = 0; ans = 0
    pref_dict = defaultdict(list); pref_dict[0].append(0)
    for l in range(n):
        cur_sum += arr[l]
        needed = cur_sum - target
        if needed in pref_dict:
            ans += len(pref_dict[needed])
            # for x in pref_dict[needed]:
            #     print(arr[x: l+1])
            # print([arr[x: l+1] for x in pref_dict[needed]])
        pref_dict[cur_sum].append(l + 1)
    return ans
    

def range_sum_query_immutable(nums: list[int], left: int, right: int) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(nums)
    for r in range(1, n):
        nums[r] += nums[r-1]
    left = nums[left-1] if left > 0 else 0
    
    return nums[right] - left


# 1  4  5  7

# 1     1   4   20
# 140   35  7    1

def product_of_array_except_self(nums: list[int]) -> list[int]:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(nums)
    # SPACE COMP -> O(n)
    # pref = [1] * n; suff = [1] * n
    # for i in range(1, n):
    #     pref[i] = pref[i-1] * nums[i-1]
    #     suff[-i-1] = suff[-i] * nums[-i]
    
    # return [i*j for i, j in zip(pref, suff)]

    # SPACE COMP -> O(1) [not considering the result array]
    res = [1]*n

    l = 1
    for i in range(n):
        res[i] = l
        l *= nums[i]
    
    r = 1
    for i in reversed(range(n)):
        res[i] *= r
        r *= nums[i]
    
    return res

def make_ascii(x):
    # assuming only upper and lower case chars in english
    res = [0]*52
    for ch in x:
        if ord(ch) <= 90:
            res[ord(ch)-ord('A')] += 1
        else:
            res[ord(ch)-ord('a')+26] += 1
    return res

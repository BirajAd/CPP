from collections import defaultdict

# original = "ggcdbebaecda", check = "abbc"

def matched(check_count, win):
    matched = True
    for k in check_count:
        if check_count[k] > win[k]:
            matched=False;break
    return matched

def get_minimum_window(original: str, check: str) -> str:
    # WRITE YOUR BRILLIANT CODE HERE
    n = len(original); l = 0; c = len(check)
    if n < c:
        return ""

    check_count = defaultdict(int)
    for ch in check:
        check_count[ch] += 1

    win = defaultdict(int)
    ans = ""
    for r in range(n):
        win[original[r]] += 1
        while l <= r and original[l] not in check_count:
            win[original[l]] = max(0, win[original[l]]-1)
            l += 1

        if r-l+1 < c: # length is fine to compare
            continue
        
        while matched(check_count, win):
            pos_ans = original[l: r+1]
            # print("MATCHED", original[l: r+1])
            ans = pos_ans if len(pos_ans) < len(ans) or ans == "" else ans
            win[original[l]] = max(0, win[original[l]]-1)
            l += 1

            # print("okay: ", original[l: r+1])

    return ans

if __name__ == "__main__":
    original = input()
    check = input()
    res = get_minimum_window(original, check)
    print(res)

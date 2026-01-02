
# https://algo.monster/problems/get_maximum_score
def maximum_score(arr1: list[int], arr2: list[int]) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    m, n = len(arr1), len(arr2); first = second = 0
    seg1 = seg2 = 0; score = 0
    while first < m and second < n:
        if arr1[first] < arr2[second]:
            seg1 += arr1[first]
            first += 1
        elif arr1[first] > arr2[second]:
            seg2 += arr2[second]
            second += 1
        else:
            # share point
            print("seg1: ", seg1, " seg2: ", seg2)
            score += max(seg1, seg2) + arr1[first]
            print("-> ", score)
            seg1 = seg2 = 0
            first += 1
            second += 1
    if first < m:
        seg1 += sum(arr1[first:])
    if second < n:
        seg2 += sum(arr2[second:])
    
    score += max(seg1, seg2)


    return score

if __name__ == "__main__":
    arr1 = [int(x) for x in input().split()]
    arr2 = [int(x) for x in input().split()]
    res = maximum_score(arr1, arr2)
    print(res)
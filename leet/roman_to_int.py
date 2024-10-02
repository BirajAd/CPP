

# 3749
def intToRoman(num: int) -> str:
    t_len = len(str(num))
    keys = [1, 5, 10, 50, 100, 500, 1000]
    vals = ["I", "V", "X", "L", "C", "D", "M"]

    if num < 10 or num % 10 == 0:
        for i in range(1, len(keys)):
            if keys[i] > num:
                left = vals[i-1]*(num//keys[i-1])
                if not left:
                    return left
        left = vals[-1]*(num//keys[-1])


    # pos = 0
    # while num > 0:
    #     rem = num % 10
    #     rem *= (10**pos)
    #     num //= 10
    #     print("doing: ", rem)
    #     pos += 1
    # return "X"
            
print(intToRoman(200))
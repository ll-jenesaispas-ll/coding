t = int(input())
while t > 0:
    t -= 1
    p = int(input())
    l = [2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1]
    res = 0
    while p > 0:
        for i in l:
            if p >= i:
                res += p // i
                p %= i
    print(res)
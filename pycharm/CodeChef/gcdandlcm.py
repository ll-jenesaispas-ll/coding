def gcd(a, b):
    if a > b:
        small = b
    else:
        small = a
    for i in range(1, small + 1):
        if a % i == 0 and b % i == 0:
            res = i
    return res


def lcm(a, b):
    if a > b:
        greater = a
    else:
        greater = b
    while True:
        if greater % a == 0 and greater % b == 0:
            res = greater
            break
        greater += 1
    return greater


t = int(input())
while t > 0:
    t -= 1
    a, b = list(map(int, input().split()))
    res1 = gcd(a, b)
    res2 = lcm(a, b)
    print(res1, res2)

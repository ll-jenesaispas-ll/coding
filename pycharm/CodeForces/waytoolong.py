t = int(input())
while t:
    t -= 1
    s = input()
    if len(s) > 10:
        print(s[0] + str(len(s) - 2) + s[len(s) - 1])
    else:
        print(s)
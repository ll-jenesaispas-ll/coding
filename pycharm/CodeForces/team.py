n = int(input())
count = 0
while n:
    n -= 1
    x = input()
    if x.count('1') >= 2:
        count += 1
print(count)

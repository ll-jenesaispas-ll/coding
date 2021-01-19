def sieve(n):
    prime = [True for i in range(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for j in range(p * p, n + 1, p):
                prime[j] = False
        p += 1
    for i in range(m,n+1):
        if prime[i]:
            print(i)


t = int(input())
while t:
    t -= 1
    m, n = map(int, input().split())
    sieve(n)
    print()
n=int(input())
l=list(map(int,input().split()))
count=1
m=1
for i in range(n-1):
    if l[i]<=l[i+1]:
        count+=1
        if count>m:
            m=count
    else:
        count=1
print(m)
n=int(input())
l=list(map(int,input().split()))
count=0
min=l[0]
max=l[0]
for i in range(n):
    if l[i]>max:
        max=l[i]
        count+=1
    if l[i]<min:
        min=l[i]
        count+=1
print(count)
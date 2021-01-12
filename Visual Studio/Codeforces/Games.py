n=int(input())
l1=[]
l2=[]
count=0
for i in range(n):
    x,y=map(int,input().split())
    l1.append(x)
    l2.append(y)
for i in range(n):
    for j in range(n):
        if l1[i]==l2[j]:
            count+=1
print(count)
n=int(input())
l=list(map(int,input().split()))
e=0
o=0
x=0
y=0
for i in range(n):
    if l[i]%2==0:
        e+=1
        x=i
    else:
        o+=1
        y=i
if e==1:
    print(x+1)
elif o==1:
    print(y+1)
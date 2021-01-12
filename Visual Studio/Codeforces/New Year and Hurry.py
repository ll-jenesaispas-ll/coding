n,k=map(int,input().split())
mins=240-k
count=0
sum=0
for i in range(1,n+1):
    sum+=5*i
    if sum>mins:
        break
    count+=1
print(count)
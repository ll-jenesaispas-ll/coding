k,r=map(int,input().split())
i=1
while(True):
    x=k*i
    if(x%10==0 or x%10==r):
        print(i)
        break
    i+=1
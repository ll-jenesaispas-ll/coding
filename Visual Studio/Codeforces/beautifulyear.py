n=int(input())
def digits(n):
    a=n%10
    b=(int)(n/10)%10
    c=(int)(n/100)%10
    d=(int)(n/1000)%10
    if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d):
        return True
    else:
        return False 
for i in range(n+1,9000):
    if digits(i):
        print(i)
        break

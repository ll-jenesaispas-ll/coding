x=int(input())
y=int(input())
z=int(input())
m=0
if x+y+z>m:
    m=x+y+z
if x*y*z>m:
    m=x*y*z
if x+(y*z)>m:
    m=x+(y*z)
if x*(y+z)>m:
    m=x*(y+z)
if x*y+z>m:
    m=x*y+z
if (x+y)*z>m:
    m=(x+y)*z 
print(m)
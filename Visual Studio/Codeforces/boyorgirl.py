s=input()
d={}
for i in range(len(s)):
    if s[i] not in d:
        d[s[i]]=1
    else:
        d[s[i]]+=1
if len(d)%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

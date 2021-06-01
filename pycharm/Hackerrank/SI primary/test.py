s = input()
l = []
s.lower()
for i in range(len(s)):
    if s[i] == 'a' or s[i] == 'e' or s[i]=='i' or s[i]=='o' or s[i]=='u':
        l.append(s[i])
print(l)
print("No of the times the vowels are occurring")
print(len(l))
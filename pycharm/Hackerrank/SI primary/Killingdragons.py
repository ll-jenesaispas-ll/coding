s = input()
l = []
s.lower()
for i in range(len(s)):
    if s[i] == 'a' or 'e' or 'i' or 'o' or 'u':
        l.append(s[i])
print(l)
print("No of the times the vowels are occuring")
print(len(l))
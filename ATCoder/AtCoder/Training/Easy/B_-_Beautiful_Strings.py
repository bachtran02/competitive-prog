s = input()
l = [0] * 26
for c in s:
    l[ord(c) - ord('a')] += 1

for i in l:
    if i % 2 != 0:
        print("No")
        exit()
print("Yes")
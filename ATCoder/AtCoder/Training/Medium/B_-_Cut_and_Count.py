n = int(input())
s = input()
maxx = -1
for i in range(n):
    set1, set2 = set(), set()
    [set1.add(x) for x in s[i:]]
    [set2.add(x) for x in s[:i]]
    maxx = max(maxx, len(set1.intersection(set2)))

print(maxx)

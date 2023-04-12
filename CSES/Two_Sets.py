import sys

n = int(input())

if n % 4 and n % 4 != 3:
    print("NO")
    sys.exit(0)

print("YES")
li = [None] * 2
li[0] = [1, 2] if n % 4 else [1]
li[1] = [3] if n % 4 else [2, 3]

for i in range(4, n + 1):
    if n % 4:
        if i % 4 == 0 or i % 4 == 3:
            li[0].append(i)
        else:
            li[1].append(i)
    else:
        if i % 4 == 0 or i % 4 == 1:
            li[0].append(i)
        else:
            li[1].append(i)

for l in li:
    print(len(l))
    for i in l:
        print(i, end=" ")
    print()

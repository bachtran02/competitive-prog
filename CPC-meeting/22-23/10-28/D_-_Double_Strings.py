test = int(input())
for z in range(test):
    n = int(input())
    res = [0] * n
    arr = list()
    aset = set()
    for i in range(n):
        s = input()
        arr.append(s)
        aset.add(s)

    for i in range(n):
        s = arr[i]
        for j in range(1, len(s)):
            if s[j:] in aset and s[:j] in aset:
                res[i] = 1
    for i in res:
        print(i, end="")
    print()

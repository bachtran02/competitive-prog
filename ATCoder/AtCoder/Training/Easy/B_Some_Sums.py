[n, a, b] = [int(x) for x in input().split()]
res = 0
for i in range(1, n + 1):
    summ = 0
    for j in str(i):
        summ += int(j)
    if b >= summ >= a:
        res += i
print(res)

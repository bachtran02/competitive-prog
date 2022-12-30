[n, m] = [int(x) for x in input().split()]
s = set()
for i in range(n):
    temp_s = set()
    li = [int(x) for x in input().split()]
    for j in range(1, li[0] + 1):
        temp_s.add(li[j])
    if i == 0:
        s = temp_s.copy()
    else:
        s = s.intersection(temp_s)
print(len(s))       

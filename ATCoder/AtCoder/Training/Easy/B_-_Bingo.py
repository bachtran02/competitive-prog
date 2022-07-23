m = []
for i in range(3):
    m.append(input().split())

arr = []
arr.append({m[0][0], m[0][1], m[0][2]})
arr.append({m[1][0], m[1][1], m[1][2]})
arr.append({m[2][0], m[2][1], m[2][2]})
arr.append({m[0][0], m[1][0], m[2][0]})
arr.append({m[0][1], m[1][1], m[2][1]})
arr.append({m[0][2], m[1][2], m[2][2]})
arr.append({m[0][0], m[1][1], m[2][2]})
arr.append({m[0][2], m[1][1], m[2][0]})

s = set()
n = int(input())
done = False
for i in range(n):
    s.add(input())
    for j in arr:
        if j.issubset(s):
            done = True

if done:
    print("Yes")
else:
    print("No")
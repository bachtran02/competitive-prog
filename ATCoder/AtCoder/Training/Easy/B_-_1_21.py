import math

[a, b] = input().split()

num = int(a + b)
s = int(math.sqrt(num))
if s * s == num:
    print("Yes")
else:
    print("No")


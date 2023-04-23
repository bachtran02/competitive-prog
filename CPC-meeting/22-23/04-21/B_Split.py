import sys

s = input()
li = [[6], [3], [1, 7], [0, 4], [2, 8], [5], [9]]

if s[0] != '0':
    print("No")
    sys.exit()

l = []
for i in range(len(li)):
    if s[li[i][0]] == '1' or len(li[i]) == 2 and s[li[i][1]] == '1':
        if l and i - l[-1] > 1:
            print("Yes")
            sys.exit()
        l.append(i)
print("No")
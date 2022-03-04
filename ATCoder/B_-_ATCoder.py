str = input()
l = "ACTG"
cnt = 0
maxx = -1

for i in str:
    if i in l:
        cnt += 1
    else:
        maxx = max(cnt, maxx)
        cnt = 0

print(max(maxx, cnt))
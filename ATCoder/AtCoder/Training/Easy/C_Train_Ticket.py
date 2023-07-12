a, b, c, d = (int(x) for x in input())
l = [
        [-1, -1, -1],
        [-1, -1,  1],
        [-1,  1,  1],
        [-1,  1, -1],
        [ 1, -1, -1],
        [ 1, -1,  1],
        [ 1,  1,  1],
        [ 1,  1, -1]
    ]
for i in l:
    if b * i[0] + c * i[1] + d * i[2] == 7 - a:
        res = str(a)
        res += '+' + str(b) if i[0] == 1 else '-' + str(b)
        res += '+' + str(c) if i[1] == 1 else '-' + str(c)
        res += '+' + str(d) if i[2] == 1 else '-' + str(d)
        print(res+'=7')
        break
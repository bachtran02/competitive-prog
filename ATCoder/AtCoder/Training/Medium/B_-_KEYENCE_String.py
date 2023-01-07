s = input()

dstr_i = 0
start_r = -1
dstr = 'keyence'

for i in range(len(s)):
    if dstr_i < len(dstr) and s[i] != dstr[dstr_i]:  # not matched
        if start_r == -1:
            start_r = i
    else:
        dstr_i += 1

# brute force to find end-index of string to be removed
for end_r in range(start_r, len(s)):
    if start_r == -1 or s[:start_r] + s[end_r:] == 'keyence':
        print("YES")
        exit()

print("NO")

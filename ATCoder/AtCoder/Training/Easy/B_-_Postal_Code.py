[a, b] = [int(x) for x in input().split()] 
s = input()

def solve(s: str):
    if '-' not in s:
        return False
    [str1, str2] = s.split('-', 1)
    if not (str1.isdigit() and str2.isdigit() and len(str1) == a and len(str2) == b):
        return False
    return True

if solve(s):
    print("Yes")
else:
    print("No")
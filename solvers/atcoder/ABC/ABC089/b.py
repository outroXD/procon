N = int(input())
S = list(input().split())
res = [0] * 4

for s in S:
    if s == 'G' and res[0] == 0:
        res[0] += 1
    elif s == 'W' and res[1] == 0:
        res[1] += 1
    elif s == 'Y' and res[2] == 0:
        res[2] += 1
    elif s == 'P' and res[3] == 0:
        res[3] += 1

if sum(res) == 3:
    print('Three')
else:
    print('Four')
N = int(input())
ans = [[0]*N for _ in range(N)]

for i in range(N)[::-1]:
    s = str(input())
    for j, c in enumerate(s):
        ans[j][i] = c

for i in ans:
    print(''.join(i))

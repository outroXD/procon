N = int(input())
A = [int(input()) for _ in range(N)]

ans = 0
s = set([])
for i in A:
    if i in s:
        ans += 1
    s.add(i)
print(ans)

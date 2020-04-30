N, T = map(int, input().split())
A = stack = [int(input()) for _ in range(N)]

ans = 0
open = A[0]
close = A[0] + T
for i, a in enumerate(A[0:]):
    if close < A[i]:
        ans += close - open
        open = A[i]
        close = A[i] + T
    else:
        close = A[i] + T

ans += close - open
print(ans)

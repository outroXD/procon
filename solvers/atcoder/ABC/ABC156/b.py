N, K = map(int, input().split())

ans = ""
while True:
    q, mod = divmod(N, K)
    ans = str(mod) + ans
    if q == 0:
        break
    N = q

print(len(ans))

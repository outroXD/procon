N, M, X = map(int, input().split())
A = list(map(int, input().split()))
res = [0]*N
for a in A:
    res[a] = 1
print(min(sum(res[:X]), sum(res[X:])))

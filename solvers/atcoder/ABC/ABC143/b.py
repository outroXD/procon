import itertools

N = int(input())
D = list(map(int, input().split()))

ans = 0
for i, j in itertools.combinations(range(N), 2):
    ans += D[i-1] * D[j-1]
print(ans)
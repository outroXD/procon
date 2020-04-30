import itertools

N = int(input())
A = list(map(int, input().split()))
ans = 0
for a, b in itertools.combinations(A, 2):
    ans = max(abs(a - b), ans)
print(ans)
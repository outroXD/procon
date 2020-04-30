N = int(input())
T = list(map(int, input().split()))
M = int(input())
ans = 0
for i in range(M):
    P, X = map(int, input().split())
    ans += sum(T[0:P-1])
    ans += X
    ans += sum(T[P:len(T)])
    print(ans)
    ans = 0

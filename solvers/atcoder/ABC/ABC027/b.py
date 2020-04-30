N = int(input())
A = list(map(int, input().split()))

if sum(A) % N != 0:
    print(-1)
    exit()

ans = 0
avg = int(sum(A) / N)
for i in range(1, len(A)):
    if avg*i != sum(A[0:i]):
        ans += 1

print(ans)

n, m = map(int, input().split())

if m > n * 4 or m < n * 2:
    print(-1, -1, -1)
    exit()

if m < n * 3:
    print(n * 3 - m, n - (n * 3 - m), 0)
else:
    print(0, n - (m - n * 3), m - n * 3)

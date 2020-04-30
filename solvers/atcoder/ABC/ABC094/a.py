A, B, X = map(int, input().split())
if A-X > 0:
    print('NO')
elif A+B < X:
    print('NO')
else:
    print('YES')
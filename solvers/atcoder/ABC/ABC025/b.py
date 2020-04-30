N, A, B = map(int, input().split())

ans = 0
for _ in range(N):
    s, d = input().split()
    d = int(d)

    if d < A:
        d = A
    if d > B:
        d = B

    if s == 'East':
        ans += d
    else:
        ans -= d

if ans > 0:
    print('East', ans)
elif ans < 0:
    print('West', abs(ans))
else:
    print(0)

#
#  ★良い感じにコードを短縮できる
#    以下、冗長ver
#
# for _ in range(N):
#     s, d = input().split()
#     d = int(d)
#
#     if d < A:
#         if s == 'East':
#             ans += A
#         else:
#             ans -= A
#
#     if A <= d <= B:
#         if s == 'East':
#             ans += d
#         else:
#             ans -= d
#
#     if d > B:
#         if s == 'East':
#             ans += B
#         else:
#             ans -= B

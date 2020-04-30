S = str(input())

ans = [0, 0, 0, 0, 0, 0]
for s in S:
    if s == 'A':
        ans[0] += 1
    if s == 'B':
        ans[1] += 1
    if s == 'C':
        ans[2] += 1
    if s == 'D':
        ans[3] += 1
    if s == 'E':
        ans[4] += 1
    if s == 'F':
        ans[5] += 1

print(*ans)

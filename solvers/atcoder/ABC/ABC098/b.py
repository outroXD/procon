def count(strings):
    s = set()
    for c in strings:
        s.add(c)
    return s


N = int(input())
S = input()
ans = 0
for i in range(1, len(S)):
    left = count(S[:i])
    right = count(S[i:])
    ans = max(ans, len(left & right))
print(ans)

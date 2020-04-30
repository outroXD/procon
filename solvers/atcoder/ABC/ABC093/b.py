A, B, K = map(int, input().split())
s = set()
for i, n in enumerate(range(A, B+1)):
    if i+1 <= K:
        s.add(n)
    if i+1 > K:
        break
for i, n in enumerate(reversed(range(A, B+1))):
    if i+1 <= K:
        s.add(n)
    if i+1 > K:
        break
for i in sorted(s):
    print(i)
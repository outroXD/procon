from collections import Counter

N, K = map(int, input().split())
S = input()
t = ""
mismatch = 0
sorted_S = sorted(S)

for i, n in enumerate(S):
    counter = Counter(S[:i+1]) - Counter(t)
    cnt = sum(counter.values())

    for c in sorted_S:
        miss = mismatch + (c != n)
        diff = cnt - (counter[c] > 0)

        if miss + diff <= K:
            t += c
            sorted_S.remove(c)
            mismatch = miss
            break
print(t)
from collections import Counter

N = int(input())
A = sorted(Counter(list(map(int, input().split()))).most_common(), reverse=True)

tmp = []
for elt, cnt in A:
    if 1 >= cnt:
        continue
    if cnt >= 4:
        tmp.append(elt)
        tmp.append(elt)
        break
    if cnt >= 2:
        tmp.append(elt)

if len(tmp) >= 2:
    print(tmp[0] * tmp[1])
else:
    print(0)

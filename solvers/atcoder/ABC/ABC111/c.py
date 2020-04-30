from collections import Counter

n = int(input())
V = list(map(int, input().split()))

even = V[0::2]
odd = V[1::2]
even_counter = Counter(even).most_common(2)
odd_counter = Counter(odd).most_common(2)

if even_counter[0][0] != odd_counter[0][0]:
    ans = len(V) - even_counter[0][1] - odd_counter[0][1]
else:
    if len(even_counter) == 1 and len(odd_counter) == 1:
        ans = len(V) // 2
    else:
        ans = len(V) - max(even_counter[0][1]+odd_counter[1][1],
                           even_counter[1][1]+odd_counter[0][1])

print(ans)

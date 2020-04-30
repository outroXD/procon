N = int(input())
cities = []
for _ in range(N):
    s, p = input().split()
    cities.append([s, int(p)])

total = 0
for s, p in cities:
    total += p
total = total / 2

for s, p in cities:
    if p > total:
        print(s)
        exit()

print("atcoder")

import itertools

inputs = list(map(int, input().split()))
ans = set()
for comb in itertools.combinations(inputs, 3):
    ans.add(sum(comb))
ans = sorted(list(ans), reverse=True)
print(ans[2])

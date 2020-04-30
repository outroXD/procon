K = int(input())
nums = [i for i in range(1, K+1)]
evens = nums[1::2]
odds = nums[0::2]

s = set()
for e in evens:
    for o in odds:
        s.add((e, o))
print(len(s))

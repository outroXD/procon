S = str(input())
S = S[::-1]
N = len(S)

count = [0] * 2019
count[0] = 1

now = 0
ten = 1

log = "s: {0}, now: {1}"
for s in S:
    now += int(s) * ten
    ten *= 10
    print(log.format(s, now))

print('FINISH')

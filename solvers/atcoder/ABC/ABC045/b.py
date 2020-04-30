S = {}
for key in ['A', 'B', 'C']:
    S[key] = list(input().upper())

val = S['A'].pop(0)
while True:
    if len(S[val]) == 0:
        print(val)
        exit()
    val = S[val].pop(0)

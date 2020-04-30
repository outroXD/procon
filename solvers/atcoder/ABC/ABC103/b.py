def next(strings):
    return strings[1:] + strings[0]


S = input()
T = input()
for i in range(len(S)+1):
    if S == T:
        print('Yes')
        exit()
    S = next(S)
print('No')

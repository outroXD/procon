S = list(input())

for i in S[1::2]:
    if i not in ['L', 'U', 'D']:
        print("No")
        exit()

for i in S[0::2]:
    if i not in ['R', 'U', 'D']:
        print("No")
        exit()

print("Yes")

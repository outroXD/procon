N, M = map(int, input().split())
sc_dict = {}
for i in range(M):
    s, c = map(int, input().split())
    s -= 1
    if sc_dict.get(s) is not None:
        if sc_dict.get(s) != c:
            print(-1)
            exit()
    else:
        sc_dict[s] = c

for i in range(10**N):
    tmp = str(i)

    if len(tmp) != N:
        continue

    flg = True
    for s, c in sc_dict.items():
        if tmp[s] != str(c):
            flg = False

    if flg:
        print(tmp)
        exit()

print(-1)

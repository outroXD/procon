S = list(input())
T = list(input())
S.sort()
T.sort()
S.reverse()
T.reverse()
for i, s in enumerate(S):
    for j, t in enumerate(T):
        if s < t:
            print('Yes')
            exit()
        if s > t:
            for k, t2 in enumerate(T):
                if s < t2:
                    print('Yes')
                    exit()

if all([x == S[0] for x in S]) \
        and all([x == S[0] for x in T]) \
        and len(S) < len(T):
    print('Yes')
else:
    print('No')

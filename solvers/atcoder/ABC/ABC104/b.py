S = list(input())
f1 = f2 = f3 = False
if S[0] == 'A':
    f1 = True
    del S[0]
if S[1:-1].count('C') == 1:
    f2 = True
    del S[S[1:-1].index('C')+1]
if ''.join(S).islower():
    f3 = True

if f1 and f2 and f3:
    print('AC')
else:
    print('WA')
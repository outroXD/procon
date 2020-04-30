S = cp = input()
cp = ''.join(set(cp))
if len(S) == len(cp):
    print('yes')
else:
    print('no')

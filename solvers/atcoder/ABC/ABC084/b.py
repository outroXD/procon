import re

A, B = input().split()
S = input()
if re.match('[0-9]{%s}-[0-9]{%s}' % (A, B), S):
    print('Yes')
else:
    print('No')
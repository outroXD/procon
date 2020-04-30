s = str(input())
first = last = None
for i, c in enumerate(s):
    if c == 'A' and first is None:
        first = i
    if c == 'Z':
        last = i
print(len(s[first:last+1]))

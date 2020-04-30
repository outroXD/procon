s = input()
k = int(input())

ans = set()
for i, c in enumerate(s):
    if len(s) < i+k:
        break
    ans.add(c + ''.join(s[i+1:i+k]))

print(len(ans))
S = input().lower()
ans = 'None'
for i in range(ord('a'), ord('z')+1):
    if chr(i) not in S:
        ans = chr(i)
        break
print(ans)
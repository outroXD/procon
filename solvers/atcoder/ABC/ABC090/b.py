def is_palindromic(num):
    tmp = list(str(num))
    while len(tmp) != 1:
        if tmp[0] == tmp[-1]:
            tmp.pop(0)
            tmp.pop(-1)
        else:
            return False
    return True


A, B = map(int, input().split())
ans = 0
for i in range(A, B+1):
    if is_palindromic(i):
        ans += 1

print(ans)

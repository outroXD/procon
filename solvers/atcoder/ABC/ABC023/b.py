N = int(input())
S = str(input())

step = 0
s = 'b'

while len(s) < N:
    sw = step % 3
    if sw == 0:
        s = 'a' + s + 'c'
    elif sw == 1:
        s = 'c' + s + 'a'
    else:
        s = 'b' + s + 'b'
    step += 1

if s == S:
    print(step)
else:
    print(-1)

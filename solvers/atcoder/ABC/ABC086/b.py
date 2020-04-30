a, b = input().split()
val = int(a+b)
for i in range(1, 1000):
    if i*i == val:
        print('Yes')
        exit()
print('No')
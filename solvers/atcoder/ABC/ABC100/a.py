A, B = map(int, input().split())
cakes = [i for i in range(17)]
if A <= len(cakes[0::2]) and B <= len(cakes[1::2]):
    print('Yay!')
else:
    print(':(')

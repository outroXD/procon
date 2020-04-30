N = int(input())

jpy = btc = 0
for i in range(N):
    x, u = input().split()
    x = float(x)
    if 'JPY' == u:
        jpy += x
    else:
        btc += x

btc = 380000.0 * btc
print(jpy + btc)

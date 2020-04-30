n, m = map(int, input().split())
short = (n % 12)*30 + 0.5*m
long = 6*m
x = abs(long - short)
print(min(x, 360-x))

import math

N = int(input())
R = [float(input()) for _ in range(N)]
R.sort()

odds = map(lambda x: x*x*-1, R[0::2])
evens = map(lambda x: x*x, R[1::2])
print(abs((sum(odds) + sum(evens))*math.pi))

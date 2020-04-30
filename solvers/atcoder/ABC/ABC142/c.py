import numpy as np

N = int(input())
A = list(map(int, input().split()))
tmp = np.argsort(A)+1
print(*tmp)
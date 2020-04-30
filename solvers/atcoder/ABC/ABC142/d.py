"""
TLE 速度改善の為の施策を考える
"""
import itertools


def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def cf(x1, x2):
    cf = []
    for i in range(1, min(x1, x2)+1):
        if x1 % i == 0 and x2 % i == 0:
            cf.append(i)
    return cf


A, B = map(int, input().split())
cf = cf(A, B)
ans = 0
for i in range(1, len(cf)+1):
    for comb in list(itertools.combinations(cf, i)):
        flag = True
        for a, b in list(itertools.combinations(comb, 2)):
            if gcd(a, b) != 1:
                flag = False
        if flag:
            s = max(ans, len(comb))
print(ans)

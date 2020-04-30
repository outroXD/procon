#!/usr/bin/env python
# -*- coding: utf-8 -*-

N, Y = map(int, input().split())
res_10000 = res_5000 = res_1000 = -1

for a in range(N+1):
    for b in range(N-a+1):
        c = N - a - b
        total = 10000*a + 5000*b + 1000*c
        if total == Y:
            res_10000 = a
            res_5000 = b
            res_1000 = c

print(str(res_10000) + ' ' + str(res_5000) + ' ' + str(res_1000))

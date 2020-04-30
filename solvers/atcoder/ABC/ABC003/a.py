#!/usr/bin/env python
# -*- coding: utf-8 -*-

N = int(input())
res = 0
for n in range(1, N+1):
    res += 10000 * n
print(int(res/N))

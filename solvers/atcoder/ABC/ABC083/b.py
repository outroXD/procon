#!/usr/bin/env python
# -*- coding: utf-8 -*-

N, A, B = map(int, input().split())

ans = []
for n in range(N+1):
    total = sum([int(n) for n in list(str(n))])
    if A <= total <= B:
        ans.append(n)

print(sum(ans))

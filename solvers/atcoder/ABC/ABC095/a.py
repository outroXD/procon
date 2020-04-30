#!/usr/bin/env python
# -*- coding: utf-8 -*-

S = input()

res = 700
for s in S:
    if s == 'o':
        res += 100
print(res)
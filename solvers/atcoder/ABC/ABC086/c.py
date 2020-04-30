#!/usr/bin/env python
# -*- coding: utf-8 -*-

N = int(input())
cordinates = [list(map(int, input().split())) for i in range(N)]

for t, x, y in cordinates:
    # x+yは時刻t毎に偶奇が入れ替わる
    if (x+y) > t or ((x+y) % 2 != t % 2):
        print('No')
        exit()
print('Yes')

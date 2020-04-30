#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
・i-j>=0の条件見落とし
・インデックスを使うとき、ノリでコーディングしてしまっている...
"""

N, K = map(int, input().split())
vals = list(map(int, input().split()))
costs = [0] * 100010
for i in range(len(vals)):
    costs[i] = vals[i]

dp = [float('inf')] * 100010
dp[0] = 0
for i in range(1, N):
    for j in range(1, K+1):
        if i-j >= 0:
            dp[i] = min(dp[i], dp[i-j] + abs(costs[i] - costs[i-j]))

# print(dp)
print(dp[N-1])


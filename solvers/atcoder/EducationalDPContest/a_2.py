#!/usr/bin/env python
# -*- coding: utf-8 -*-

# 配るDPによる実装
# dp[i]の値がわかっている前提で、その値を使ってdp[i+1]、dp[i+2]を更新する

N = int(input())
costs = list(map(int, input().split())) + [0]*10000


def chmin(i, j, dp, costs):
    if dp[i+j] > dp[i] + abs(costs[i] - costs[i+j]):
        dp[i+j] = dp[i] + abs(costs[i] - costs[i+j])
        return True
    return False


dp = [float('inf')] * 100010
dp[0] = 0
for i in range(N):
    chmin(i, 1, dp, costs)
    chmin(i, 2, dp, costs)

print(dp[N-1])

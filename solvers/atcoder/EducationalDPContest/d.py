#!/usr/bin/env python
# -*- coding: utf-8 -*-

N, W = map(int, input().split())
items = [list(map(int, input().split())) for _ in range(N)]

dp = [[0 for _ in range(W+10)] for _ in range(N+10)]

for i, (item_weight, item_value) in enumerate(items):
    for total_weight in range(W+1):
        if (total_weight-item_weight) >= 0:
            dp[i+1][total_weight] = max(dp[i][total_weight-item_weight] + item_value, dp[i+1][total_weight])
            # dp[i+1][total_weight] = dp[i][total_weight-item_weight] + item_value  こちらでもok
        dp[i+1][total_weight] = max(dp[i+1][total_weight], dp[i][total_weight])

print(dp[N][W])

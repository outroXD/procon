#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
・最大化問題
・連続して同じ活動を選ぶことはできない
・幸福度の総和を最大化する
"""

N = int(input())
actives = [list(map(int, input().split())) for n in range(N)]

dp = [[0 for _ in range(3)] for __ in range(N+100)]
for i in range(N):
    for j in range(3):
        for k in range(3):
            if j == k:  # i-1番目,i番目で連続して同じ活動は選択できない
                continue
            dp[i+1][k] = max(dp[i+1][k], (dp[i][j] + actives[i][k]))

print(max(dp[N]))

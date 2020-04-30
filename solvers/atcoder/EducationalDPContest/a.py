#!/usr/bin/env python
# -*- coding: utf-8 -*-

# https://atcoder.jp/contests/dp/submissions/6739593

N = int(input())
vals = list(map(int, input().split()))


def chmin_orig(i1, i2):
    if dp[i1] > (dp[i2] + abs(vals[i1]-vals[i2])):
        dp[i1] = dp[i2] + abs(vals[i1]-vals[i2])
        return True
    return False


dp = [float('inf')] * 100010
dp[0] = 0
for i in range(N):
    # i番目に対して、i-1番目から来たときのコストを最初に計算し、
    # 次にi-2番目から来たときのコストを計算する。
    # chmin()内の判定処理により、最終的にコストが低い方が残ることになる。
    chmin_orig(i, i-1)
    if i > 1:
        chmin_orig(i, i-2)

print(dp[N-1])

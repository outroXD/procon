#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
* dp[i] := i文字目で切ることができれば1、できなければ0.
* 入力例：erasedream
"""
S = str(input())
words = ['dream', 'dreamer', 'erase', 'eraser']
dp = [0] * 100010

# 強引にwordsのループに入れる
dp[0] = 1
for i in range(len(S)):
    #
    if not dp[i]:
        continue
    for w in words:
        if S[i:i+len(w)] == w:
            dp[i+len(w)] = 1

if dp[len(S)] == 1:
    print('YES')
else:
    print('NO')

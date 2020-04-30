#!/usr/bin/env python
# -*- coding: utf-8 -*-


def chmax(i, j, dp, costs):
    if dp[i+j] < dp[i] + abs(costs[i] - costs[i+j]):
        dp[i+j] = dp[i] + abs(costs[i] - costs[i+j])
        return True
    return False


def chmin(i, j, dp, costs):
    if dp[i+j] > dp[i] + abs(costs[i] - costs[i+j]):
        dp[i+j] = dp[i] + abs(costs[i] - costs[i+j])
        return True
    return False

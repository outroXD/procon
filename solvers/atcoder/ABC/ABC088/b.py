#!/usr/bin/env python
# -*- coding: utf-8 -*-

N = int(input())
a_n = list(map(int, input().split()))

a_n.sort(reverse=True)
alice = a_n[0: len(a_n): 2]
bob = a_n[1: len(a_n): 2]

print(sum(alice) - sum(bob))

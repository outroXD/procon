#!/usr/bin/env python
# -*- coding: utf-8 -*-

a, b = map(int, input().split())
prod = a * b
if prod % 2 == 0:
    print('Even')
else:
    print('Odd')

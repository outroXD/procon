#!/usr/bin/env python
# -*- coding: utf-8 -*-

m = int(input())
km = m/1000


def my_print(km):
    print("{0:02d}".format(int(km)))


if 0.1 > km:
    my_print(0)
elif 0.1 <= km <= 5:
    my_print(km*10)
elif 6 <= km <= 30:
    my_print(km+50)
elif 35 <= km <= 70:
    my_print((km-30)/5+80)
elif 70 < km:
    my_print(89)

import datetime

S = str(input())
s = datetime.datetime.strptime(S, '%Y/%m/%d')
target = datetime.datetime.strptime("2019/04/30", '%Y/%m/%d')

if target >= s:
    print("Heisei")
else:
    print("TBD")

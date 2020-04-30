import datetime

S = datetime.datetime.strptime(input(), '%Y/%m/%d')
print('2018/01/' + str(S.day).zfill(2))
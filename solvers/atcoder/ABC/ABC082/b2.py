s = input()
t = input()

sl = ''.join(sorted(s))
tl = ''.join(reversed(sorted(t)))

# 1文字でも s < tになるなら、入れ替えてs<tの関係にすることができる
if sl < tl:
    print('Yes')
else:
    print('No')

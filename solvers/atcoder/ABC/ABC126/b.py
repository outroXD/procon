S = input()
a = int(S[:2])
b = int(S[2:])
is_a_Y = is_b_Y = False

if 1 <= a <= 12:
    is_a_Y = True
if 1 <= b <= 12:
    is_b_Y = True

if is_a_Y and is_b_Y:
    print('AMBIGUOUS')
elif is_a_Y and not is_b_Y:
    print('MMYY')
elif not is_a_Y and is_b_Y:
    print('YYMM')
else:
    print('NA')

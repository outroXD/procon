N, K = map(int, input().split())
if N%K == 0:  # 丁度配れる場合
    print(0)
else:
    print(1)
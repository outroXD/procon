N, K = map(int, input().split())

# Kの倍数である数値の個数
cnt_k = 0
for i in range(1, N+1):
    if i % K == 0:
        cnt_k += 1

# 余りがKの半分となる数値の個数
cnt_k_half = 0
for i in range(1, N+1):
    if i % K == K / 2:
        cnt_k_half += 1

# すべての要素がKの倍数の場合
ans = cnt_k**3
# Kが偶数なら余りがK/2の場合も考慮する
if K % 2 == 0:
    ans += cnt_k_half**3

print(ans)
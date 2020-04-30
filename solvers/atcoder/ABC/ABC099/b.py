a, b = map(int, input().split())

ans = 1
while True:
    val_a = 0.5 * ans * (ans + 1) - a
    val_b = 0.5 * (ans + 1) * (ans + 2) - b
    if val_a == val_b:
        ans = int(val_a)
        break
    ans += 1
print(ans)

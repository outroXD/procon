import copy

calc = ""


def dfs(nums, ret, data):
    if len(nums) == 0 and ret == 7:
        global calc
        calc = data
        return True
    if len(nums) == 0:
        return False
    cp = copy.copy(nums)
    v = cp.pop(0)
    if dfs(cp, ret+v, data+"+"):
        return True
    if dfs(cp, ret-v, data+"-"):
        return True


N = list(map(int, list(input())))
n_cp = copy.copy(N)
v = N.pop(0)
dfs(N, v, "")

ans = ""
for i in range(len(n_cp)):
    ans += str(n_cp[i])
    if i != 3:
        ans += str(calc[i])
ans += "=7"
print(ans)

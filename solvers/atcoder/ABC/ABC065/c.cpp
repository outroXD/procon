#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

long long calc(int num)
{
    long long ans = num;
    --num;
    while (num != 0) {
        ans *= num;
        ans %= MOD;
        --num;
    }
    return ans;
}

int main()
{
    int N, M; cin >> N >> M;

    long long ans;
    if (abs(N-M) > 1)
        ans = 0ll;
    else if (N == M)
        ans = (((calc(N) * calc(M)) % MOD) * 2) % MOD;
    else
        ans = (calc(N) * calc(M)) % MOD;

    cout << ans << endl;
}
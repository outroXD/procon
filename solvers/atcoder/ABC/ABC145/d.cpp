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

const int MAX = 2010000;
long long fac[MAX], finv[MAX], inv[MAX];

void initialize_binominal_coefficient_table()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; ++i) {
        fac[i] = fac[i-1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;
    }
}

long long binominal_coefficient(int n, int k)
{
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    // nCk
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
    long long X, Y;
    cin >> X >> Y;

    // 処理する度に全体で3増えるので、それ以外の場合は到達不可
    if ((X+Y)%3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    initialize_binominal_coefficient_table();
    cout << binominal_coefficient((x+y)/3, (x+y)/3*2-x) << endl;
}

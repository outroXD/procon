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

int main()
{
    int N; cin >> N;
    vector<int64_t> X(N), dp(N);
    rep (i, 0, N) cin >> X[i];

    int64_t mean = accumulate(X.begin(), X.end(), 0ll);
    mean /= N;
    dp.resize(mean+1);

    rrep (i, 1, mean+1) {
        int64_t cnt = 0;
        rep (j, 0, N) {
            cnt += pow(X[j] - i, 2);
        }
        dp[i-1] = cnt;
    }

    int64_t ans = *min_element(dp.begin(), dp.end());
    cout << ans << endl;
}
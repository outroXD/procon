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
    vector<int> a(N);
    rep (i, 0, N) cin >> a[i];

    vector<int> dp(N+10, INF);
    dp.at(0) = 0;
    for (int now = 0; now < N; now++) {
        for (int next = now+1; next <= min(N, now+2); next++) {
            dp[next] = min(dp[next], abs(a[now] - a[next])+dp[now]);
        }
    }

    cout << dp[N-1] << endl;
}
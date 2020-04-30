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

/**
 * 配るDPver
 * @return
 */
int main()
{
    int N; cin >> N;
    vector<int> H;
    rep (i, 0, N) {
        int h; cin >> h;
        H.push_back(h);
    }

    vector<int> dp(N+1, INF);
    dp[0] = 0;
    for (int now = 0; now < N; now++) {
        for (int next = now+1; next <= min(N, now+2); next++) {
            dp[next] = min(dp[next], abs(H[now] - H[next])+dp[now]);
        }
    }

    cout << dp[N-1] << endl;
}

/**
 * 貰うDPver
 * @return
 */
int main1()
{
    int N; cin >> N;
    vector<int> H;
    rep (i, 0, N) {
        int h; cin >> h;
        H.push_back(h);
    }

    vector<int> dp(N+1, INF);
    dp[0] = 0;
    for (int now = 1; now < N; ++now) {
        dp[now] = min(dp[now], dp[now-1] + abs(H[now] - H[now-1]));
        if (now > 1) dp[now] = min(dp[now], dp[now-2] + abs(H[now] - H[now-2]));
    }

    cout << dp[N-1] << endl;
}
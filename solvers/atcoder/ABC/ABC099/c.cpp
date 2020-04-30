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

const int MAX_N = 110000;
int dp[MAX_N];

int main()
{
    int N; cin >> N;

    rep (i, 0, MAX_N) dp[i] = N;
    dp[0] = 0;

    for (int n = 0; n < N; ++n) {
        for (int pow6 = 1; n + pow6 <= N; pow6 *= 6) {
            dp[n + pow6] = min(dp[n + pow6], dp[n] + 1);
        }
        for (int pow9 = 1; n + pow9 <= N; pow9 *= 9) {
            dp[n + pow9] = min(dp[n + pow9], dp[n] + 1);
        }
    }
    cout << dp[N] << endl;
}
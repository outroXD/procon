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
    long long N, H; cin >> N >> H;
    long long A, B, C, D, E; cin >> A >> B >> C >> D >> E;

    long long cost = LINF;
    rrep (x, 0, N) {
        if (H + (B + E) * x - E * N > 0)
            cost = min(cost, A * x);
        else {
            long long y = ((N - x) * E - H - B * x) / (D + E) + 1;
            if (x + y <= N) cost = min(cost, A * x + C * y);
        }
    }
    cout << cost << endl;
}

/**
 * 部分点解法(100)
 */
int main_100()
{
    long long N, H; cin >> N >> H;
    long long A, B, C, D, E; cin >> A >> B >> C >> D >> E;

    long long ans = LINF;
    rrep (x, 0, N) {
        rrep (y, 0, N) {
            if ((B * x) + (D * y) - (E * (N - (x + y))) + H > 0) {
                long long cost = (x * A) + (y * C);
                ans = min(ans, cost);
            }
        }
    }

    cout << ans << endl;
}

/**
 * 部分点解法(30):DP
 * 「経過日数」と「満腹度」が決まれば、「最小の食費」は一意に決まる
 */
int main_30()
{
    long long N, H; cin >> N >> H;
    long long A, B, C, D, E; cin >> A >> B >> C >> D >> E;

    vector<vector<long long>> dp(55, vector<long long>(100005, LINF));
    dp.at(0).at(H) = 0;

    rep (i, 0, N) {
        rep (j, 0, 100005) {
            if (dp[i][j] == LINF) continue;

            dp[i+1][j+B] = min(dp[i+1][j+B], dp[i][j]+A);
            dp[i+1][j+D] = min(dp[i+1][j+D], dp[i][j]+C);
            if (j - E > 0) {
                dp[i+1][j-E] = min(dp[i+1][j-E], dp[i][j]);
            }
        }
    }

    long long ans = LINF;
    rep (i, 0, 100005) {
        ans = min(ans, dp[N][i]);
    }

    cout << ans << endl;
}

/**
 * 部分点解法(10):全探索
 */
//long long N, A, B, C, D, E;
//long long ans = LINF;
//
//void dfs(long long day, long long H, long long cost)
//{
//    if (0 >= H) return;
//    if (day == N) {
//        ans = min(ans, cost);
//        return;
//    }
//
//    dfs(day + 1, H + B, cost + A);  // 普通の食事を取るパターン
//    dfs(day + 1, H + D, cost + C);  // 質素な食事を取るパターン
//    dfs(day + 1, H - E, cost);  // 食事を取らないパターン
//}
//
//int main_10()
//{
//    long long H; cin >> N >> H;
//    cin >> A >> B >> C >> D >> E;
//
//    dfs(0, H, 0);
//    cout << ans << endl;
//}
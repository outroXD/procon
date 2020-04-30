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

int dp[310];

int main()
{
    int N; cin >> N;
    vector<int> NG(3, 0);
    rep (i, 0, 3) cin >> NG[i];

    rep (i, 0, N) {
        dp[i] = INF;
    }
    dp[N] = 0;
    for (int i = N; i != 0; i--) {
        if (i == NG[0] or i == NG[1] or i == NG[2])
            continue;
        for (int j = 1; j < 4; j++)  // 1回の試行で届く範囲をイテレートで再現
            dp[i-j] = min(dp[i-j], dp[i]+1);
    }

    if (dp[0] <= 100) cout << "YES" << endl;
    else cout << "NO" << endl;
}

/**
 * 全探索(TLE)
 */
//bool dfs(int now, int cnt)
//{
//    if (now == 0) return true;
//    if (now == NG1 or now == NG2 or now == NG3) return false;
//    if (cnt == 100) return false;
//
//    if (dfs(now - 1, cnt + 1)) return true;
//    if (dfs(now - 2, cnt + 1)) return true;
//    if (dfs(now - 3, cnt + 1)) return true;
//}
//
//int main()
//{
//    cin >> N;
//    cin >> NG1;
//    cin >> NG2;
//    cin >> NG3;
//
//    if (dfs(N, 0)) {
//        cout << "YES" << endl;
//        return 0;
//    }
//    cout << "NO" << endl;
//}
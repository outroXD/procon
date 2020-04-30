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

//ll ans = 0;
//
//void dfs(const int N, const vector<int>& A, int depth)
//{
//    if (depth > N)
//        return;
//
//    auto iter = find(A.begin(), A.end(), depth);
//    if (iter != A.end())
//        return;
//
//    if (N == depth) {
//        ans += 1;
//        return;
//    }
//
//    dfs(N, A, depth+1);
//    dfs(N, A, depth+2);
//}
//
//int main()
//{
//    int N, M; cin >> N >> M;
//    vector<int> A;
//    rep (i, 0, M) {
//        int a; cin >> a;
//        A.push_back(a);
//    }
//
//    dfs(N, A, 0);
//
//    cout << ans << endl;
//}

int main()
{
    int N, M; cin >> N >> M;

    vector<int> oks(N+1, true);
    for (int i = 0; i < M; ++i) {
        int a; cin >> a;
        oks[a] = false;
    }

    vector<long long int> dp(N+1);
    dp[0] = 1;
    for (int now = 0; now < N; ++now) {  // 全ての階段に関するイテレーション
        for (int next = now + 1; next <= min(N, now+2) ; ++next) {
            if (oks[next]) {
                dp[next] += dp[now];
                dp[next] %= MOD;
            }
        }
    }

    cout << dp[N] << endl;
}
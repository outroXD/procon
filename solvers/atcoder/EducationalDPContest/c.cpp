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

long long A[100010][3];
long long dp[100010][3];

int main()
{
    int N; cin >> N;
    rep (i, 0, N) {
        rep (j, 0, 3) {
            cin >> A[i][j];
        }
    }

    rep (i, 0, N) {  // 0日目から開始
        rep (j, 0, 3) {  // 活動j
            rep (k, 0, 3) {  // 活動k
                if (j == k) continue;  // i日目とi+1日目の活動は異なる
                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + A[i][k]);
            }
        }
    }

    long long ans = -1;
    rep (j, 0, 3) {  // N日目の幸福度が最大になる活動を探索
        ans = max(ans, dp[N][j]);
    }
    cout << ans << endl;
}
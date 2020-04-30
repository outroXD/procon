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

ll WEIGHTS[110], VALUE[110];
ll DP[110][100100] = {0};

int main()
{
    ll N, W; cin >> N >> W;
    rep (i, 0, N) {
        cin >> WEIGHTS[i] >> VALUE[i];
    }

    rep (i, 0, N) {
        rrep (sum_w, 0, W) {
            if (sum_w - WEIGHTS[i] >= 0) {
                DP[i+1][sum_w] = max(DP[i+1][sum_w], DP[i][sum_w-WEIGHTS[i]] + VALUE[i]);
            }
            DP[i+1][sum_w] = max(DP[i+1][sum_w], DP[i][sum_w]);
        }
    }

    cout << DP[N][W] << endl;
}
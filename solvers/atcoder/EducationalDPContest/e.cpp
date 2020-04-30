#include <bits/stdc++.h>
typedef long long ll;
const long long INF = 1LL << 60;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

const int MAX_N = 110;
const int MAX_V = 100100;

ll WEIGHTS[MAX_N], VALUE[MAX_N];
ll DP[MAX_N][MAX_V];

int main()
{
    int N, W; cin >> N >> W;
    rep (i, 0, N) {
        cin >> WEIGHTS[i] >> VALUE[i];
    }
    rep (i, 0, MAX_N) {
        rep (j, 0, MAX_V) {
            DP[i][j] = INF;
        }
    }
    DP[0][0] = 0;

    rep (i, 0, N) {
        rrep (sum_v, 0, MAX_V) {
            if (sum_v - VALUE[i] >= 0)
                DP[i+1][sum_v] = min(DP[i+1][sum_v], DP[i][sum_v - VALUE[i]] + WEIGHTS[i]);
            DP[i+1][sum_v] = min(DP[i+1][sum_v], DP[i][sum_v]);
        }
    }

    ll res = 0;
    rep (sum_v, 0, MAX_V) {
        if (DP[N][sum_v] <= W) res = sum_v;
    }

    cout << res << endl;
}
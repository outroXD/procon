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

int main()
{
    int H, N; cin >> H >> N;
    vector<int> A(N), B(N);
    rep (i, 0, N) cin >> A[i] >> B[i];

    vector<vector<long long>> DP(N+1, vector<long long>(H+1, INF));
    DP[0][0] = 0;
    rep (i, 0, N) {
        rrep (j, 0, H) {
            DP[i+1][j] = min(DP[i+1][j], DP[i][j]);
            DP[i+1][min(j+A[i], H)] = min(DP[i+1][min(j+A[i], H)], DP[i+1][j]+B[i]);
        }
    }

    cout << DP[N][H] << endl;
}
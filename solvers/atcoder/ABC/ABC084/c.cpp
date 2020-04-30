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

int main() {
    int N; cin >> N;
    vector<int> C(N), S(N), F(N);
    rep (i, 0, N-1) cin >> C[i] >> S[i] >> F[i];

    vector<int> ans(N, 0);
    rep (i, 0, N-1) {
        int arrive = S[i] + C[i], lag;
        rep (j, i+1, N-1) {
            int diff = arrive - S[j];
            if (diff >= 0) {
                lag = F[j] - (diff % F[j]);
                if (lag == F[j]) lag = 0;
                arrive += lag + C[j];
            }
            else
                arrive = S[j] + C[j];
        }
        ans[i] = arrive;
    }

    rep (i, 0, ans.size()) cout << ans[i] << endl;
}
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
    int N; cin >> N;
    vector<int> a(N);
    rep (i, 0, N) cin >> a[i];

    int ans = -INF;
    rep (i, 0, N) {
        int max_a = -INF, max_t = -INF;
        rep (j, 0, N) {
            if (i == j) continue;

            vector<int> T;
            for (int k = min(i, j); k <= max(i, j); k++) {
                T.push_back(a[k]);
            }

            int score_a = 0, score_t = 0;
            rep (k, 0, T.size()) {
                if (k % 2 == 0) score_t += T[k];
                else score_a += T[k];
            }

            if (score_a > max_a) {
                max_a = score_a;
                max_t = score_t;
            }
        }
        ans = max(ans, max_t);
    }

    cout << ans << endl;
}
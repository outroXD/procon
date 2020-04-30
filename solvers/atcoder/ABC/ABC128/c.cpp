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
    int N, M; cin >> N >> M;
    vector<vector<int>> S;
    rep (i, 0, M) {
        vector<int> s;
        int k; cin >> k;
        rep (j, 0, k) {
            int in; cin >> in; --in;
            s.push_back(in);
        }
        S.push_back(s);
    }
    vector<int> P;
    rep (i, 0, M) {
        int p; cin >> p;
        P.push_back(p);
    }

    int ans = 0;
    rep (bit, 0, (1 << N)) {
        rep (i, 0, M) {
            int total_p = 0;
            rep (j, 0, S[i].size()) {
                if (bit & (1 << S[i][j])) ++total_p;
            }
            if (total_p % 2 != P[i]) break;
            if (i == M-1) ++ans;
        }
    }

    cout << ans << endl;
}
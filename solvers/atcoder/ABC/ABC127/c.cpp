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
    int max_l = -1, min_r = INF;
    rep (i, 0, M) {
        int l, r; cin >> l >> r;
        max_l = max(max_l, l);
        min_r = min(min_r, r);
    }

    int ans = 0;
    rrep (i, 1, N) {
        if (max_l <= i and min_r >= i) ++ans;
    }

    cout << ans << endl;
}
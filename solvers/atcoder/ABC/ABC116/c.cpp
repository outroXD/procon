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
    vector<int> h(N+1, 0);
    rep (i, 0, N) cin >> h[i];

    int ans = 0;
    while (true) {
        rep (i, 0, h.size()-1) {
            if (h[i] == 0) continue;
            if (h[i+1] == 0) ++ans;
            --h[i];
        }
        if (count(h.begin(), h.end(), 0) == h.size()) {
            cout << ans << endl;
            return 0;
        }
    }
}
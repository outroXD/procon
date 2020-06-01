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
#define each(i, map) for (auto& i : map)

int main()
{
    int N, K; cin >> N >> K;
    map<int, int> mp;
    rep (i, 0, K) {
        int d; cin >> d;
        rep (j, 0, d) {
            int a; cin >> a;
            ++mp[a];
        }
    }

    int ans = 0;
    rrep (i, 1, N) {
        if (mp[i] == 0) ++ans;
    }
    cout << ans << endl;
}
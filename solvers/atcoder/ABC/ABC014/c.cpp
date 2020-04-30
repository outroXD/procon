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

const int MAX_COLOR_TYPE = 1000001;

int main()
{
    int n; cin >> n;
    vector<int> table(MAX_COLOR_TYPE, 0);
    rep (i, 0, n) {
        int a, b; cin >> a >> b;
        ++table[a];
        --table[b+1];
    }

    int ans = -INF;
    rep (i, 0, table.size()) {
        if (0 < i) table[i] += table[i-1];
        ans = max(ans, table[i]);
    }

    cout << ans << endl;
}
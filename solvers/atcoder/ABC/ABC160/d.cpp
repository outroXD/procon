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
    int N, X, Y; cin >> N >> X >> Y;
    vector<int> ans(N);

    rrep (i, 1, N) {
        rrep (j, i, N) {
            if (i == j) continue;
            int dist = min(abs(i - X) + 1 + abs(Y - j), abs(j - i));
            ++ans[dist];
        }
    }
    rep (i, 1, ans.size()) cout << ans[i] << endl;
}
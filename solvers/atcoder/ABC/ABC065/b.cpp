#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N, next_val, ans = 1; cin >> N;
    vector<int> buttons, flags(N, 0);
    rep (i, 0, N) {
        int in; cin >> in;
        buttons.push_back(in);
    }

    flags[0] = 1;
    next_val = buttons[0];
    while (true) {
        if (next_val == 2) break;
        if (flags[next_val - 1] == 1) {
            cout << -1 << endl;
            return 0;
        }
        flags[next_val - 1] = 1;
        next_val = buttons[next_val - 1];
        ans += 1;
    }
    cout << ans << endl;
}
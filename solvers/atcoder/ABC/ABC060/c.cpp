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
    long long N, T; cin >> N >> T;
    vector<long long> t(N); cin >> t[0];
    long long diff, ans = T;
    rep (i, 1, N) {
        cin >> t[i];
        diff = t[i] - (t[i-1] + T);
        if (diff >= 0)
            ans += T;
        else
            ans += (T + diff);
    }

    cout << ans << endl;
}
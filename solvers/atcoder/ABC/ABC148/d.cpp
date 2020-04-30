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

    int ans = 0, counter = 1;
    bool flg = false;
    rep (i, 0, a.size()) {
        if (a[i] == counter) {
            ++counter;
            flg = true;
        }
        else {
            ++ans;
        }
    }

    if (flg)
        cout << ans << endl;
    else
        cout << -1 << endl;

}
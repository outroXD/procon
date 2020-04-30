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
    long long L, R; cin >> L >> R;

    if (R - L >= 2019) cout << 0 << endl;
    else {
        long long ans = INF;
        for (long long i = L; i < R; ++i) {
            for (long long j = i+1; j <= R; ++j) {
                ans = min(ans, (i * j) % 2019);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
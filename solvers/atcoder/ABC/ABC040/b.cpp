#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int n; cin >> n;

    int ans = INF;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    rrep (i, 1, n) {
        rrep (j, 1, n) {
            if (i+j > n) break;
            if (i*j > n) break;
            ans = min(ans, abs(i-j) + n-(i*j));
        }
    }
    cout << ans << endl;
}
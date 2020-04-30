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
    int N, ans = 0; cin >> N;
    rep (i, 0, N) {
        long long in; cin >> in;
        if (in % 2 == 0) {
            while (true) {
                if (in == 1 or in % 2 != 0) break;
                in /= 2;
                ++ans;
            }
        }
    }
    cout << ans << endl;
}
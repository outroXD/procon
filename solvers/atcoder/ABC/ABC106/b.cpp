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
    int N, ans = 0; cin >> N;
    rrep (i, 1, N) {
        if (i % 2 == 0) continue;
        int tmp = 0;
        rrep (j, 1, i) if (i % j == 0) tmp++;
        if (tmp == 8) ans++;
    }
    cout << ans << endl;
}
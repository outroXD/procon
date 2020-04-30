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
    int W, H, N; cin >> W >> H >> N;
    int min_h = 0, max_h = H;
    int min_w = 0, max_w = W;
    rep (i, 0, N) {
        int x, y, a; cin >> x >> y >> a;
        if (1 == a) min_w = max(min_w, x);
        if (2 == a) max_w = min(max_w, x);
        if (3 == a) min_h = max(min_h, y);
        if (4 == a) max_h = min(max_h, y);
    }
    if ((max_h - min_h <= 0) or (max_w - min_w <= 0)) {
        cout << 0 << endl;
        return 0;
    }
    cout << (max_h - min_h) * (max_w - min_w) << endl;
}
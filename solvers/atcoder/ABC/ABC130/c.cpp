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
    ll W, H, x, y; cin >> W >> H >> x >> y;
    double res = (double)(W) * H / 2;
    cout << fixed << setprecision(10) << res << " ";
    if (x*2 == W && y*2 == H) cout << 1 << endl;
    else cout << 0 << endl;
}

// 駄目だったパターン
//int main()
//{
//    double W, H, x, y; cin >> W >> H >> x >> y;
//
//    double total = H * W;
//    double a = H * (W - x);
//    double b = W * (H - y);
//
//    cout << max(min(a, total - a), min(b, total - b)) << " ";
//    if (min(a, total - a) == min(b, total - b)) cout << 1 << endl;
//    else cout << 0 << endl;
//
//    return 0;
//}
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
#define each(i, map) for (auto& i : map)

int main()
{
    double A, B, H, M; cin >> A >> B >> H >> M;

    const double PI = acos(-1.0);
    double rad_a = (H * 60 + M) / 720 * (2 * PI);
    double rad_b = M / 60 * (2 * PI);
    double rad = rad_a - rad_b;
    double ans = sqrt(A*A + B*B - 2.0*A*B*cos(rad));

    cout << fixed << setprecision(10) << ans << endl;
}
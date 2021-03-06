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
    int N; cin >> N;
    vector<double> V;
    rep (i, 0, N) {
        double v; cin >> v;
        V.push_back(v);
    }

    sort(V.begin(), V.end());
    double ans = (V[0] + V[1]) / 2.0;
    rep (i, 2, N) {
        ans = (ans + V[i]) / 2.0;
    }

    cout << ans << endl;
}
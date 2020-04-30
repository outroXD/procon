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

int N;
vector<long long> x(100), y(100), h(100);

bool is_ans(int Cx, int Cy, int H)
{
    rep (i, 0, N) {
        if (h[i] != max(0ll, H - abs(x[i] - Cx) - abs(y[i] - Cy)))
            return false;
    }
    return true;
}

int main()
{
    cin >> N;
    rep (i, 0, N) cin >> x[i] >> y[i] >> h[i];

    rrep (Cx, 0, 100) {
        rrep (Cy, 0, 100) {
            rep (i, 0, N) {
                int H = h[i] + abs(Cx - x[i]) + abs(Cy - y[i]);
                if (is_ans(Cx, Cy, H)) {
                    cout << Cx << " " << Cy << " " << H << endl;
                    return 0;
                }
            }
        }
    }
}
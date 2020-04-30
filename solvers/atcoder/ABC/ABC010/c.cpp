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

double get_dist(int x1, int x2, int y1, int y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
    int txa, tya, txb, tyb, T, V;
    cin >> txa >> tya >> txb >> tyb >> T >> V;
    int n; cin >> n;
    vector<int> x(n), y(n);
    vector<double> dist(n);
    rep (i, 0, n) {
        cin >> x[i] >> y[i];
        dist[i] = get_dist(x[i], txa, y[i], tya) + get_dist(txb, x[i], tyb, y[i]);
    }

    int direct = T * V;
    rep (i, 0, n) {
        if (dist[i] <= direct) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
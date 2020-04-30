#include <iostream>
#include <map>

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
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    int dx = tx - sx, dy = ty - sy;
    string res = "";
    rep (i, 0, dx) res += "R";
    rep (i, 0, dy) res += "U";
    rep (i, 0, dx) res += "L";
    rep (i, 0, dy) res += "D";

    res += "D";
    rrep (i, 0, dx) res += "R";
    rrep (i, 0, dy) res += "U";
    res += "L";
    res += "U";
    rrep (i, 0, dx) res += "L";
    rrep (i, 0, dy) res += "D";
    res += "R";

    cout << res << endl;
}
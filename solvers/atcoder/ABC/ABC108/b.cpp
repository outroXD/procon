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
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    cout << x2 - (y2 - y1) << " ";
    cout << y2 + (x2 - x1) << " ";
    cout << x1 - (y2 - y1) << " ";
    cout << y1 + (x2 - x1) << endl;
}
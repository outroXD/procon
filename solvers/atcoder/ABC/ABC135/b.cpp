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
    double N; cin >> N;
    double cnt = 0;
    rrep (i, 1, N) {
        int p; cin >> p;
        if (i != p) ++cnt;
    }
    if (cnt/2 <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
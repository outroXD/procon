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
    int A, B; cin >> A >> B;

    rep (value, 1, 1009) {
        int a = floor(0.08 * (double)value);
        int b = floor(0.10 * (double)value);
        if (a == A && b == B) {
            cout << value << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
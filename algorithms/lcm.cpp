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

int lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}

int main()
{
    int N, m = 0; cin >> N;
    vector<int> a(N);
    rep (i, 0, N) {
        cin >> a[i];
    }

    m = a[0];
    rep (i, 1, N) {
        m *= a[i];
    }

    int test = 3 * 5 * 7 * 2;
    if (test % 3 == 0) cout << 3 << " : ok!" << endl;
    if (test % 5 == 0) cout << 5 << " : ok!" << endl;
    if (test % 7 == 0) cout << 7 << " : ok!" << endl;
    if (test % 2 == 0) cout << 2 << " : ok!" << endl;

    cout << "STOP" << endl;
}
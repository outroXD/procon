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

long long solve(vector<long long> a, int x)
{
    long long ret = 0, now = 0;
    for (long long i = 0; i < a.size(); i++) {
        now += a[i];
        if ((i % 2 ^ x) and (now >= 0)) {
            ret += now + 1;
            now = -1;
        }
        if (!(i % 2 ^ x) and (now <= 0)) {
            ret -= now - 1;
            now = 1;
        }
    }
    return ret;
}

int main()
{
    int n; cin >> n;
    vector<long long> a(n);
    rep (i, 0, n) {
        cin >> a[i];
    }

    cout << min(solve(a, 0), solve(a, 1)) << endl;
}
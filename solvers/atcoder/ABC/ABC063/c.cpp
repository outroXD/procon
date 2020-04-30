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
    int N, min_n = INF; cin >> N;
    vector<int> s(N);
    long long total = 0;
    rep (i, 0, N) {
        cin >> s[i];
        total += s[i];
        if (s[i] % 10 != 0)
            min_n = min(min_n, s[i]);
    }

    if (total % 10 != 0) {
        cout << total << endl;
        return 0;
    }

    if (min_n != INF) {
        total -= min_n;
        cout << total << endl;
    }
    else {
        cout << 0 << endl;
    }
}
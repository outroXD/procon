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
    int N, M; cin >> N >> M;
    vector<ll> X(M, 0);
    rep (i, 0, M) cin >> X[i];

    if (N >= M) {
        cout << 0 <<endl;
        return 0;
    }

    sort(X.begin(), X.end());

    vector<ll> diffs;
    rep (i, 0, X.size()) {
        diffs.push_back(X[i] - X[i-1]);
    }
    sort(diffs.begin(), diffs.end(), greater<ll>());

    ll res = X.back() - X[0];
    rep (i, 0, min((int)diffs.size(), N-1)) {
        res -= diffs[i];
    }

    cout << res << endl;
}
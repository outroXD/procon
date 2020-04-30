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
    int N, K; cin >> N >> K;
    vector<int> x(N), cost;
    rep (i, 0, N) cin >> x[i];

    int ans = INF;
    rep (i, 0, N-K+1) {
        ans = min(ans, min(x[i+K-1] - x[i] + abs(x[i+K-1]), x[i+K-1] - x[i] + abs(x[i])));
    }

    cout << ans << endl;
}
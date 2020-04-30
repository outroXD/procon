#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const long long INFL = 1e18;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    long long N, K; cin >> N >> K; --K;
    vector<long long> h(N);
    rep (i, 0, N) cin >> h[i];

    sort(h.begin(), h.end(), greater<>());
    long long ans = INFL;
    for (long long i = 0; i < h.size()-K; i++) {
        ans = min(ans, h[i]-h[i+K]);
    }

    cout << ans << endl;
}
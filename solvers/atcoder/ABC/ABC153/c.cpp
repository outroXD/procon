#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (long long i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    long long N, K, ans = 0ll; cin >> N >> K;
    vector<long long> H(N);
    rep (i, 0ll, N) cin >> H[i];

    sort(H.begin(), H.end(), greater<long long>());
    rep (i, K, N) ans += H[i];

    cout << ans << endl;
}
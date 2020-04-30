#include <bits/stdc++.h>
typedef long long ll;
const long long INF = 1LL << 60;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    long long N; cin >> N;
    vector<long long> a(N), cum(N+10, 0);
    rep (i, 0, N) {
        cin >> a[i];
        cum[i+1] = a[i] + cum[i];
    }

    long long ans = INF;
    rep (i, 1, N) {
        ans = min(ans, abs(cum[i]-(cum[N]-cum[i])));
    }

    cout << ans << endl;
}
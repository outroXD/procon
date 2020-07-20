#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))
#define each(i, map) for (auto& i : map)

int main()
{
    int N, K; cin >> N >> K;
    vector<int> p(N);
    rep (i, 0, N) cin >> p[i];
    sort(p.begin(), p.end());

    int ans = 0;
    rep (i, 0, K) ans += p[i];

    cout << ans << endl;
}

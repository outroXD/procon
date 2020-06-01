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
#define each(i, map) for (auto& i : map)

int main()
{
    long long N, M; cin >> N >> M;
    vector<long long> H(N);
    rep (i, 0, N) cin >> H[i];
    vector<int> ok(N, 1);
    rep (i, 0, M) {
        int a, b; cin >> a >> b; --a, --b;
        if (H[a] < H[b]) ok[a] = 0;
        else if (H[a] > H[b]) ok[b] = 0;
        else ok[a] = ok[b] = 0;
    }

    cout << accumulate(ok.begin(), ok.end(), 0) << endl;
}
#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int dist(int K, int x)
{
    if (x < K - x) return x;
    else return K - x;
}

int main()
{
    int N, K, ans = 0; cin >> N >> K;
    rep (i, 0, N) {
        int x; cin >> x;
        ans += dist(K, x) * 2;
    }
    cout << ans << endl;
}
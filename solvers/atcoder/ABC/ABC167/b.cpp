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

int main() {
    long long A, B, C, K; cin >> A >> B >> C >> K;

    int ans = 0;
    if (A > K) {
        ans += K;
        cout << ans << endl;
        return 0;
    } else {
        K -= A;
        ans += A;
    }

    if (B > K) {
        cout << ans << endl;
        return 0;
    } else {
        K -= B;
    }

    ans -= K;
    cout << ans << endl;
}
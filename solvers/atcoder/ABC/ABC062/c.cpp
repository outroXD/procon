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
    long long H, W; cin >> H >> W;

    long long area = H*W;
    if (area % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }
    else {
        long long ans = LINF;
        for (int j = 0; j < 2; ++j) {
            for (long long i = 1; i < H; ++i) {
                long long a = i * W;
                long long b = (W/2) * (H-i);
                long long c = ((W+1)/2) * (H-i);
                ans = min(ans, abs(max({a, b, c}) - min({a, b, c})));

                b = ((H-i)/2) * W;
                c = ((H-i+1)/2) * W;
                ans = min(ans, abs(max({a, b, c}) - min({a, b, c})));
            }
            swap(H, W);
        }
        cout << ans << endl;
    }
}
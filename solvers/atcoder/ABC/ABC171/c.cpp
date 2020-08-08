#include <algorithm>
#include <iostream>
#include <string>

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
    long long N; cin >> N;
    const int digits = 26;
    // 0桁目の「X」は使用されることはない。
    // N進数変換時には1~Nの数字に変換されるから、それをそのままインデックスとして使用すれば0桁目を参照することはない。
    const string chars = "Xabcdefghijklmnopqrstuvwxyz";

    string ans = "";
    while (true) {
        long long x = N % digits;

        // 余りが0の場合：つまりzの場合、26
        if (x == 0) {
            x = 26;
        }
        ans += chars[x];

        // xを引いて、26で割る
        N -= x;

        // 0なら終了
        if (N == 0) break;

        N /= digits;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

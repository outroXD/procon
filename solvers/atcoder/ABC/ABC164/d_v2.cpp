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
    string S; cin >> S;

    reverse(S.begin(), S.end());
    long long ten = 1, now = 0;

    // a_0 ≡ 0 (mod 2019)
    // 割り切れるものに関しては「組」にする必要がないので、
    // 0になる場合を想定して予め0に値を入れておく
    map<long long, long long> mp;
    mp[0] = 1;

    // 入力文字列の頭から見ていく
    for (long long i = 0; i < S.size(); i++) {
        // mod: 足す度に割る
        now += (((S.at(i) - '0') % 2019) * ten);
        now %= 2019;

        // mod: 掛ける度に割る
        ten *= 10;
        ten %= 2019;

        // 余りを記録
        ++mp[now];
    }

    long long ans = 0;
    for (auto& m : mp) {
        ans += (m.second * (m.second - 1)) / 2;
    }
    cout << ans << endl;
}
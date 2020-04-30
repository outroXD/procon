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
    long N; cin >> N;
    map<long long, long long> cnt;

    for (long i = 0; i < N; ++i) {
        long long in; cin >> in;
        cnt[in] += 1;
    }

    long long ans = 0;
    for (auto &c : cnt) {
        if (c.first == c.second) continue;
        if (c.first <= c.second) ans += (c.second - c.first);
        else ans += c.second;
    }

    cout << ans << endl;
}
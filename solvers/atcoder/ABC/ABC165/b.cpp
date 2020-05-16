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
    long long X; cin >> X;

    long long cnt = 0;
    double now = 100;
    while (true) {
        if (now >= X) break;
        now = floor(now + (now * 0.01));
        ++cnt;
    }
    cout << cnt << endl;
}
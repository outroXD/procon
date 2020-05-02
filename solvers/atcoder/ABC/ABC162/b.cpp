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
    int N; cin >> N;

    long long ans = 0l;
    rrep (i, 1, N) {
        if (i % 3 == 0 and i % 5 == 0) continue;
        else if (i % 3 == 0 or i % 5 == 0) continue;
        else ans += i;
    }

    cout << ans << endl;
}
#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s, e) for (int i = s-1; i > e; i--)
#define revrrep(i, s, e) for (int i = s-1; i >= e; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N, K, ans = 0; cin >> N >> K;
    vector<int> length;
    rep (i, 0, N) {
        int in; cin >> in;
        length.push_back(in);
    }

    sort(length.begin(), length.end());
    reverse(length.begin(), length.end());
    rep (i, 0, K) ans += length[i];
    cout << ans << endl;
}
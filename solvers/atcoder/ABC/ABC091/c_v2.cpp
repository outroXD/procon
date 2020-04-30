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
    vector<pair<int, int>> red(N), blue(N);
    vector<int> ans_red(N), ans_blue(N);
    rep (i, 0, N) {
        int a, b; cin >> a >> b;
        red[i] = make_pair(a, b);
    }
    rep (i, 0, N) {
        int c, d; cin >> c >> d;
        blue[i] = make_pair(c, d);
    }
}
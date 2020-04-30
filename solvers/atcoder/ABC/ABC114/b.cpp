#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;
using Graph = vector<string>;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    string S; cin >> S;
    vector<int> res;
    rep (i, 0, S.size()-2) res.push_back(stoi(S.substr(i, 3)));
    int ans = INF;
    rrep (i, 0, res.size()) ans = min(abs(753-res[i]), ans);
    cout << ans << endl;
}
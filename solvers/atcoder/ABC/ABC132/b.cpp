#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int n, ans = 0; cin >> n;
    vector<int> P;
    rep (i, 0, n) {
        int p; cin >> p;
        P.push_back(p);
    }

    rep (i, 0, P.size()-2) {
        vector<int> tmp_vec;
        copy(P.begin()+i, P.begin()+i+3, back_inserter(tmp_vec));
        int tmp_val = tmp_vec[1];
        sort(tmp_vec.begin(), tmp_vec.end());
        if (tmp_vec[1] == tmp_val) ++ans;
    }
    cout << ans << endl;
}
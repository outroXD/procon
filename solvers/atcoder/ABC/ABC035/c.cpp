#include <bits/stdc++.h>
#include <boost/dynamic_bitset.hpp>

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
    int N, Q; cin >> N >> Q;
    vector<int> imos(N+1), cul(N+1);
    rep (i, 0, Q) {
        int l, r; cin >> l >> r;
        --l, --r;
        ++imos[l];
        --imos[r+1];
    }

    cul[0] = imos[0];
    rep (i, 1, N) {
        cul[i] = cul[i-1] + imos[i];
    }

    string ans = "";
    rep (i, 0, N) {
        if (cul[i] % 2 == 0) ans += '0';
        else ans += '1';
    }
    cout << ans << endl;
}

/**
 * TLE(部分点)
 */
int main_tle()
{
    int N, Q; cin >> N >> Q;
    vector<int> l(Q), r(Q);
    rep (i, 0, Q) {
        cin >> l[i] >> r[i];
    }

    boost::dynamic_bitset<> ans(N);
    rep (i, 0, Q) {
        boost::dynamic_bitset<> flg(N);
        rrep (j, l[i], r[i]) {
            flg.set(N-j);
        }
        ans ^= flg;
    }
    cout << ans << endl;
}
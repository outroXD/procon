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
    int N, Q; cin >> N >> Q;
    string S; cin >> S;

    vector<int> cum(S.size()+10, 0);
    rrep (i, 1, S.size()) {
        int cnt = 0;
        if (S[i-1] == 'A' and S[i] == 'C') cnt = 1;
        cum[i] = cnt + cum[i-1];
    }

    rep (i, 0, Q) {
        int l, r; cin >> l >> r; --l; --r;
        cout << cum[r] - cum[l] << endl;
    }
}
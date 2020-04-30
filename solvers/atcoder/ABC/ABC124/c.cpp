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
    string S, a, b; cin >> S;
    rrep (i, 1, S.size()) {
        if (i % 2 == 0) {
            a += '1';
            b += '0';
        }
        else {
            a += '0';
            b += '1';
        }
    }

    int cnt_a = 0, cnt_b = 0;
    rep (i, 0, S.size()) {
        if (S[i] != a[i]) ++cnt_a;
        else if (S[i] != b[i]) ++cnt_b;
    }

    cout << min(cnt_a, cnt_b) << endl;
}
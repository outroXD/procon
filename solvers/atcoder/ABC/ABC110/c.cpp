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
    string S, T; cin >> S >> T;

    bool ok = true;
    map<char, char> smap, tmap;
    rep (i, 0, S.size()) {
        char s = S[i], t = T[i];
        if (smap.count(s)) if (smap[s] != t) ok = false;
        if(tmap.count(t)) if (tmap[t] != s) ok = false;
        smap[s] = t; tmap[t] = s;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}
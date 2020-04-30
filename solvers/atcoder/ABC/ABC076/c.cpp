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

bool compare(string T, string part)
{
    if (T.size() != part.size()) return false;
    rep (i, 0, T.size()) {
        if (part.at(i) == '?') continue;
        else if (T.at(i) == part.at(i)) continue;
        else return false;
    }
    return true;
}

int main()
{
    string Sd, T; cin >> Sd >> T;

    if (Sd.size() < T.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    // Sdのi文字目を固定して、そこから文字列長が|T|の部分文字列を抽出する
    vector<string> anss;
    rep (i, 0, Sd.size()) {
        string part = Sd.substr(i, T.size());
        if (compare(T, part)) {
            string ans;
            ans += Sd.substr(0, i);
            ans += T;
            ans += Sd.substr(ans.size(), Sd.size());
            replace(ans.begin(), ans.end(), '?', 'a');
            anss.push_back(ans);
        }
    }

    if (!anss.empty()) {
        sort(anss.begin(), anss.end());
        cout << anss[0] << endl;
        return 0;
    }

    cout << "UNRESTORABLE" << endl;
}
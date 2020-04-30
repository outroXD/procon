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
    string S; cin >> S;

    vector<int> e, w;
    (S[0] == 'E') ? e.push_back(0) : e.push_back(1);
    for (int i = 1; i < S.size(); ++i) {
        if (S[i] != 'E') e.push_back(e[i-1]+1);
        else e.push_back(e[i-1]);
    }
    reverse(S.begin(), S.end());
    (S[0] == 'W') ? w.push_back(0) : w.push_back(1);
    for (int j = 1; j < S.size(); ++j) {
        if (S[j] != 'W') w.push_back(w[j-1]+1);
        else w.push_back(w[j-1]);
    }
    reverse(w.begin(), w.end());

    int ans = INF;
    for (int k = 0; k < S.size(); ++k) {
        if (k == 0) ans = min(ans, w[k+1]);
        else if (k == S.size()-1) ans = min(ans, e[k-1]);
        else ans = min(ans, e[k-1]+w[k+1]);
    }
    cout << ans << endl;
}
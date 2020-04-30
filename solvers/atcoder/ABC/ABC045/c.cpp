#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
const long long LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

long long eval(vector<string> vals)
{
    long long ans = 0;
    for (auto str : vals) {
        string tmp;
        for (auto c : str) {
            if (c == '+') {
                ans += stoll(tmp);
                tmp.clear();
                continue;
            }
            tmp += c;
        }
        ans += stoll(tmp);
        tmp.clear();
    }
    return ans;
}

int main()
{
    string S; cin >> S;
    vector<string> vals;
    for (int bit = 0; bit < (1 << S.size()-1); ++bit) {
        string s;
        for (int i = 0; i < S.size(); ++i) {
            s += S[i];
            if (bit & (1 << i)) s += '+';
        }
        vals.push_back(s);
    }
    cout << eval(vals) << endl;
}
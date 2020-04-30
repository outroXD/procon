#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    string s; cin >> s;

    string ans;
    for (auto c : s) {
        if ('0' == c) ans.push_back('0');
        if ('1' == c) ans.push_back('1');
        if ('B' == c) {
            if (ans.empty()) continue;
            ans.pop_back();
        }
    }
    cout << ans << endl;
}
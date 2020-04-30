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
    string S; cin >> S;

    ll cnt_one = 0, cnt_zero = 0;
    for (auto c : S) {
        if (c == '1') ++cnt_one;
        else ++cnt_zero;
    }
    cout << min(cnt_one, cnt_zero) * 2 << endl;
}
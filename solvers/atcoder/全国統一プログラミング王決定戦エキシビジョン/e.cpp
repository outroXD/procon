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

    rrep (i, 1, N) {
        string ans = "";
        if (i % 2 == 0) ans += 'a';
        if (i % 3 == 0) ans += 'b';
        if (i % 4 == 0) ans += 'c';
        if (i % 5 == 0) ans += 'd';
        if (i % 6 == 0) ans += 'e';
        if (ans.empty()) ans += to_string(i);
        cout << ans << endl;
    }
}
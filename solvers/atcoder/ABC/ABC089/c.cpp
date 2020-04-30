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
    long long N; cin >> N;
    vector<int> count(5, 0);
    rep (i, 0, N) {
        string S; cin >> S;
        if (S[0] == 'M') ++count[0];
        else if (S[0] == 'A') ++count[1];
        else if (S[0] == 'R') ++count[2];
        else if (S[0] == 'C') ++count[3];
        else if (S[0] == 'H') ++count[4];
    }

    long long ans = 0;
    rep (i, 0, 3) {
        rep (j, (i+1), 4) {
            rep (k, (j+1), 5) {
                ans += count[i] * count[j] * count[k];
            }
        }
    }

    cout << ans << endl;
}
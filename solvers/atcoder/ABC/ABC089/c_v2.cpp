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

long long combination(const map<char, int> &map)
{
    long long ans = 1;
    for (long long i = map.size(); i >= map.size()-3; --i)
        ans *= i;
    return ans / 6ll;
}

int main()
{
    int N; cin >> N;
    vector<long long> count(5, 0);
    rep (i, 0, N) {
        string s; cin >> s;
        if (s[0] == 'M') ++count[0];
        else if (s[0] == 'A') ++count[1];
        else if (s[0] == 'R') ++count[2];
        else if (s[0] == 'C') ++count[3];
        else if (s[0] == 'H') ++count[4];
    }

    string march = "MARCH";
    long long ans = 0;
    rep (i, 0, 5) {
        rep (j, 0, i) {
            rep (k, 0, j) {
                ans += count[i] * count[j] * count[k];
            }
        }
    }
    cout << ans << endl;
}
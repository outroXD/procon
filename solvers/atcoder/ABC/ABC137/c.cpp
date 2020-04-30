#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

long combination(int n, int r = 2)
{
    long num = 1;
    rrep (i, 1, r) num = num * (n - i + 1) / i;
    return num;
}

int main2()
{
    int N; cin >> N;
    map<string, int> res;
    rep (i, 0, N) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        res[s] += 1;
    }

    long ans = 0;
    for (const auto &map : res)
        ans += combination(map.second);
    cout << ans << endl;
}

int main()
{
    int N; cin >> N;
    map<map<char, int>, int> res;
    rep (i, 0, N) {
        map<char, int> m;
        for (auto key = 'a'; key <= 'z'; ++key)
            m[key] = 0;

        string s; cin >> s;
        for (auto key : s)
            ++m[key];

        if (res.find(m) == res.end())
            res[m] = 1;
        else ++res[m];
    }

    long ans = 0;
    for (const auto &map : res)
        ans += combination(map.second);
    cout << ans << endl;
}
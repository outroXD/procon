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

int main()
{
    int N; cin >> N;
    vector<pair<string, int>> pairs;
    rep (i, 0, N) {
        string s; int p; cin >> s >> p;
        pairs.push_back(make_pair(s, p));
    }
    vector<size_t> indices(pairs.size());
    iota(indices.begin(), indices.end(), 0);

    sort(indices.begin(), indices.end(), [&pairs](size_t i1, size_t i2) {
        if (pairs[i1].first == pairs[i2].first) {
            return pairs[i1].second > pairs[i2].second;
        } else {
            return pairs[i1].first < pairs[i2].first;
        }
    });

    rep (i, 0, indices.size()) cout << indices[i]+1 << endl;
}
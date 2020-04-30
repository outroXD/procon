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

/**
 * AC(一応)
 * 実行速度遅い
 */
int main()
{
    int N; cin >> N;
    map<string, int> map;
    rep (i, 0, N) {
        string in; cin >> in;
        ++map[in];
    }

    int max_v = 0;
    vector<pair<string, int>> vec;
    vec.reserve(map.size());
    for (auto &mp : map) {
        vec.emplace_back(mp.first, mp.second);
        max_v = max(max_v, mp.second);
    }

    sort(vec.begin(), vec.end(), [&vec](pair<string, int> &p1, pair<string, int> &p2) {
        if (p1.second != p2.second) return p1.second > p2.second;
        else return p1.first < p2.first;
    });

    for (auto &v : vec) {
        if (v.second == max_v) {
            cout << v.first << endl;
        }
    }
}
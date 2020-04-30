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
    int N, M; cin >> N >> M;
    map<int, vector<int>> map;
    rep (i, 0, M) {
        int a, b; cin >> a >> b;
        if (map.find(a) != map.end())
            map[a].push_back(b);
        else {
            vector<int> tmp = {b};
            map[a] = tmp;
        }
    }

    for (auto i : map[1]) {
        for (auto j : map[i]) {
            if (j == N) {
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}
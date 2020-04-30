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

using Graph = vector<vector<int>>;

bool is_indirect(Graph &G, int i, int j)
{
    if (i == j) return false;

    auto iter = find(G[i].begin(), G[i].end(), j);
    auto idx = distance(G[i].begin(), iter);
    if (idx != G[i].size()) return false;

    set<int> set;
    rep (k, 0, G[i].size()) set.insert(G[i][k]);
    rep (k, 0, G[j].size()) set.insert(G[j][k]);
    if (set.size() == G[i].size()+G[j].size()) return false;

    return true;
}

int main()
{
    int N, M; cin >> N >> M;
    Graph G(N);
    rep (i, 0, M) {
        int a, b; cin >> a >> b; --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    rep (i, 0, N) {
        int ans = 0;
        rep (j, 0, N) {
            if (is_indirect(G, i, j)) ++ans;
        }
        cout << ans << endl;
    }
}
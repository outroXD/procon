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

class UnionFind {
    // parent[i]: iの親の番号 (ex) parent[3] = 2: 3の親は2
    vector<int> parent;

public:
    // 初期化処理: 最初は全てが異なる根であるものとして初期化する
    UnionFind(int N) : parent(N) {
        for (int i = 0; i < N; ++i) {
            parent[i] = i;
        }
    }

    // データxが属する木の根を再帰的に探索
    // else句の中では経路圧縮も兼ねている
    int root(int x) {
        if (parent[x] == x) return x;
        else return parent[x] = root(parent[x]);
    }

    // xとyの木を合併する
    void unite(int x, int y) {
        int rx = root(x);  // xの根
        int ry = root(y);  // yの根
        if (rx == ry) return;
        parent[rx] = ry;  // xとyの根が異なる場合、xの根rxをyの根ryにつける
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }
};

int main()
{
    int N, Q; cin >> N >> Q;
    UnionFind tree(N);

    rep (i, 0, Q) {
        int p, a, b; cin >> p >> a >> b;
        if (p == 0)
            tree.unite(a, b);
        else {
            if (tree.same(a, b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

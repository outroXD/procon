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

#define ROOT -1

/*****************************************************************************/
class Vertex
{
public:
    explicit Vertex(int p = -1, int l = INF) : pre(p), low(l){}
    int pre, low, parent = ROOT;
    bool visited = false;
};

/*****************************************************************************/
class Graph
{
private:
    int bridge = 0, time = 0;
    vector<vector<int>> edge;
    vector<Vertex> vertex;

    void dfs(int now)
    {
        vertex[now].visited = true;
        vertex[now].pre = vertex[now].low = ++time;

        for (int next : edge[now]) {
            if (!vertex.at(next).visited) {
                vertex[next].parent = now;
                dfs(next);
                vertex[now].low = min(vertex[now].low, vertex[next].low);
                if (vertex[next].low > vertex[now].pre) {
//                    cout << "now(" << now+1 << ") to next(" << next+1 << ") is bridge." << endl;
                    ++bridge;
                }
            } else if (next != vertex[now].parent) {
                vertex[now].low = min(vertex[now].low, vertex[next].pre);
            }
        }
    }

public:
    explicit Graph(int v)
    {
        edge = vector<vector<int>>(v);
        vertex = vector<Vertex>(v);
    }

    void add_edge(int from, int to)
    {
        edge[from].push_back(to);
        edge[to].push_back(from);
    }

    int low_link()
    {
        dfs(0);
        return bridge;
    }
};

/*****************************************************************************/
int main()
{
    int N, M; cin >> N >> M;
    Graph g = Graph(N);
    rep (i, 0, M) {
        int a, b; cin >> a >> b;
        --a; --b;
        g.add_edge(a, b);
    }
    cout << g.low_link() << endl;
}
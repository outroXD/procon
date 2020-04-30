#include <bits/stdc++.h>
const int INF = 1e9;

using namespace std;

class Edge
{
public:
    Edge(int t, int c, int r) : to(t), cap(c), rev(r){}
    int to;
    int cap;
    int rev;
};

class Graph
{
private:
    vector<vector<Edge>> graph;
    vector<bool> used;
    int max_v;
    
    int dfs (int v, int t, int f)
    {
        if (v == t) return f;
        used[v] = true;
        for (auto& e : graph[v]) {
            if (!used[e.to] and e.cap > 0) {
                int d = dfs(e.to, t, min(f, e.cap));
                if (d > 0) {
                    e.cap -= d;
                    graph[e.to][e.rev].cap += d;
                    return d;
                }
            }
        }
        return 0;
    }

public:
    explicit Graph (int v)
    {
        graph = vector<vector<Edge>>(v);
        max_v = v;
    }

    void add_edge (int from, int to, int cap)
    {
        graph[from].push_back((Edge){to, cap, static_cast<int>(graph[to].size())});
        graph[to].push_back((Edge){from, 0, static_cast<int>(graph[from].size()-1)});
    }
    
    int max_flow (int s, int t)
    {
        int flow = 0;
        while (true) {
            used = vector<bool>(max_v, false);
            int f = dfs(s, t, INF);
            if (f == 0) return flow;
            flow += f;
        }
    }
};


int main()
{
    int a,b,c;
    int V, E; cin >> V >> E;
    Graph g = Graph(V);
    for(int i = 0 ; i < E ; i++) {
        cin >> a >> b >> c;
        g.add_edge(a, b, c);
    }
    cout << g.max_flow(0,V-1) << endl;
    return 0;
}

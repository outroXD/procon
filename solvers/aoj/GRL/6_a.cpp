#include <bits/stdc++.h>

using namespace std;

#define MAX_V 100
#define INF 1e9

struct edge{ int to,cap,rev; };

int V,E;
vector<edge> G[MAX_V];
bool used[MAX_V];

void add_edge(int from,int to,int cap){
    G[from].push_back((edge){to,cap,static_cast<int>(G[to].size())});
    G[to].push_back((edge){from,0,static_cast<int>(G[from].size()-1)});
}

int dfs(int v,int t,int f){
    if(v == t) return f;
    used[v] = true;
    for(int i = 0 ; i < (int)G[v].size() ; i++){
        edge &e = G[v][i];
        if(!used[e.to] && e.cap > 0){
            int d = dfs(e.to,t, min(f, e.cap));
            if(d > 0){
                e.cap -= d;
                G[e.to][e.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}

int max_flow(int s,int t){
    int flow = 0;
    for(;;){
        memset(used,false,sizeof(used));
        int f = dfs(s,t,INF);
        if(f == 0) return flow;
        flow += f;
    }
}

int main(){
    int a,b,c;
    cin >> V >> E;
    for(int i = 0 ; i < E ; i++){
        cin >> a >> b >> c;
        add_edge(a,b,c);
    }
    cout << max_flow(0,V-1) << endl;
    return 0;
}

//#include <bits/stdc++.h>
//typedef long long ll;
//const int INF = 1e9;
//const int MOD = 1e9+7;
//const ll LINF = 1e18;
//
//using namespace std;
//
//#define rep(i, a, b) for (int i = a; i < b; i++)
//#define rrep(i, a, b) for (int i = a; i <= b; i++)
//#define all(a)  begin((a)),end((a))
//#define uniq(c) (c).erase(unique(all((c))), end((c)))
//
//class Graph
//{
//private:
//    struct Edge {
//        int to;
//        int cap;
//        int rev;
//        Edge(int t, int c, int r) : to(t), cap(c), rev(r){}
//    };
//    vector< vector< Edge > > graph;
//    vector<bool> used;
//    int v;
//
//    int dfs (int v, int t, int f)
//    {
//        if (v == t) return f;
//        this->used[v] = true;
//        for (int i = 0; i < this->graph.size(); ++i) {
//            Edge &e = this->graph[v][i];
//
//            cout << "to: " << e.to << endl;
//            cout << "cap: " << e.cap << endl;
//            cout << "===========" << endl;
//
//            if (!used[e.to] and e.cap > 0) {
//                int d = dfs(e.to, t, min(f, e.cap));
//                if (d > 0) {
//                    e.cap -= d;
//                    this->graph[e.to][e.rev].cap += d;
//                    return d;
//                }
//            }
//        }
//        return 0;
//    }
//
//public:
//    explicit Graph (int v)
//    {
//        this->v = v;
//        this->graph = vector< vector < Edge > >(v);
//    }
//
//    void add_edge (int from, int to, int cap)
//    {
//        this->graph[from].push_back(Edge(to, cap, this->graph[to].size()));
//        this->graph[to].push_back(Edge(from, 0, this->graph[from].size()-1));
//    }
//
//    int max_flow (int s, int t)
//    {
//        int flow = 0;
//        while (true) {
//            this->used = vector<bool>(this->v, false);
//            int f = dfs(s, t, INF);
//            if (f == 0) return flow;
//            flow += f;
//        }
//    }
//};
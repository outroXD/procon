#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;
using Graph = vector<vector<string>>;

void dfs(const Graph &G, set<string> &set, int depth, string value)
{
    if (depth == G.size()) {
        set.insert(value);
        return;
    }
    for (auto next_value : G[depth]) {
        dfs(G, set, depth+1, value+next_value);
    }
}

int main()
{
    int N; cin >> N;
    Graph G(N);
    rep (i, 0, N) {
        G[i].push_back("a");
        G[i].push_back("b");
        G[i].push_back("c");
    }

    set<string> set;
    dfs(G, set, 0, "");

    for (auto str : set) {
        cout << str << endl;
    }
}
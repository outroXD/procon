#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;
using Graph = vector<vector<int>>;

bool dfs(const Graph &G, int depth, int value)
{
    if (depth == G.size()) return (0 == value);
    for (auto next_value : G[depth]) {
        if (dfs(G, depth+1, value^next_value)) {
            return true;
        }
    }
    return false;
}

int main()
{
    int N, K; cin >> N >> K;
    Graph G(N);
    rep (i, 0, N) {
        rep (j, 0, K) {
            int in; cin >> in;
            G[i].push_back(in);
        }
    }

    if (dfs(G, 0, 0)) puts("Found");
    else puts("Nothing");
}
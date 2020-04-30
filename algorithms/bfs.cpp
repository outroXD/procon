// https://qiita.com/drken/items/996d80bcae64649a6580

#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
    int N, M; cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N, -1);
    queue<int> que;

    dist[0] = 0;  // ノード0は
    que.push(0);

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (int nv : G[v]) {
            // nv番目:ノードの状態を確認
            // 発見済の頂点(0)の場合、探索対象外
            if (dist[nv] != -1) continue;

            // -1:未探索
            // distには何巡目で辿れるかが保存される
            // v-1ノードに登録されている値に1を足すと、何巡目でここに到達できるかになる
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    for (int v = 0; v < N; ++v) cout << v << ": " << dist[v] << endl;
}
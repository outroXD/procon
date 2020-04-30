#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;
using Graph = vector<vector<int>>;

/**
 * シンプルな深さ優先探索
 * @param G
 * @param depth
 */
void dfs(const Graph &G, int depth)
{
    if (depth == G.size()) return;
    for (auto next_v : G[depth]) {
        cout << next_v << endl;  // TODO 外すこと
        dfs(G, depth+1);
    }
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

    dfs(G, 0);
}

// 【カスタム】
// valueは問題に合わせt追加された。
// valueに渡されるのは各ノードの値であることに加え、
// n回目の再帰呼び出し時、valueにはn-1回目までの排他的論理和が取られたものが渡ってくる。
bool dfs(const Graph &G, int depth, int value)
{
    //【カスタム】
    // n-1回目の処理の中でn回目の再帰呼び出しをしようとする時点で、
    // 引数ではn回目までの排他的論理和を計算しているので、末端ノードまで処理が続いて、
    // このif文に入るタイミングではすでにここまでの経路で通るノードの排他的論理和は計算済なので、
    // 最後に0と比較する。
    // 0の場合：バグあり ⇛ Found
    // 0以外の場合：バグなし ⇛ Nothing
    if (depth == G.size()) return (0 == value);
    for (auto next_value : G[depth]) {
        // 【カスタム】
        //　末端ノードを1つ超過した先で判定を行う
        // 末端ノードまで到達した場合、ここのvalue^next_valueで末端までの排他的論理和が計算される
        // 要は「ここまでの経路の状態の保存」に相当することをしている。
        if (dfs(G, depth+1, value^next_value)) {
            return true;
        };
    }
    // 【カスタム】
    // 0==value がfalseである場合こちらのルートへ。
    return false;
}
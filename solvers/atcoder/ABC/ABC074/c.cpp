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
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    double ans = 0;
    int water = 0, sugar = 0;
    vector<int> params(4);
    rrep (a, 0, 30) {
        rrep (b, 0, 30) {
            rrep (c, 0, 100) {
                rrep (d, 0, 100) {
                    int w_weight = 100*A*a + 100*B*b;
                    int s_weight = C*c + D*d;

                    if (F < w_weight + s_weight) continue;
                    if (s_weight > E*w_weight/100) continue;

                    if (w_weight+s_weight == 0) continue;

                    if (ans < (double)100*s_weight/(w_weight+s_weight)) {
                        ans = (double)100*s_weight/(w_weight+s_weight);
                        water = w_weight;
                        sugar = s_weight;
                    }
                }
            }
        }
    }

    if (ans == 0) water = 100*A;

    cout << water+sugar << " " << sugar << endl;
}

/**
 * A: 操作1でビーカーに水を入れるときのグラム数
 * B: 操作2でビーカーに水を入れるときのグラム数
 * C: 操作3でビーカーに砂糖を入れるときのグラム数
 * D: 操作4でビーカーに砂糖を入れるときのグラム数
 * E: 水100gあたり溶ける砂糖のグラム数
 * F: ビーカーに入れることのできる質量の合計。
 *    水の質量+砂糖の質量がF以下になる必要がある。
 *    水aグラムと砂糖bグラムを混ぜた砂糖水の濃度は 100b / a+b で計算できる
 *
 * ・できるだけ濃度の高い砂糖水を作りたい。
 * ・ビーカーの中に砂糖を溶け残らせてはいけない。
 *    → 水をnグラムいれたとして、そこに溶かせる砂糖の量はEnグラム。
 *
 * 例1
 * ビーカーに入る物質は200gまで。
 * 水を入れる操作はA(100g)、B(200g)なので、濃度の高い砂糖水を作るという目的よりAを選択
 * 砂糖はC(10g)、D(20g)を選択可能。水100gあたり、砂糖はEg(15g)溶かすことができるので操作Cを選択。
 * 以上より水→100g、砂糖→10gなので、砂糖水の濃度は100*10 / 100+10
 *
 * 出力
 * 砂糖水の質量 砂糖の質量
 *
 * 【実装メモ】
 * ●終了条件
 * ビーカーの質量チェック：Fが0以下になったとき。
 *   → ビーカーが入れることができる質量
 *
 */

//int A, B, C, D, E, F;
//int ans = 0, w = 0, s = 0;
//
//bool is_melt(int water, int sugar)
//{
//    while (water != 0) {
//        water -= 100;
//        sugar -= E;
//    }
//    return sugar == 0;
//}
//
//int dfs(int water, int sugar, int beaker)
//{
//    if (0 > beaker - (100*A)     // 100*Aグラムの水を追加すると、ビーカーが入れることができる質量を超えるケース
//        or 0 > beaker - (100*B)  // 100*Bグラムの水を追加すると、ビーカーが入れることができる質量を超えるケース
//        or 0 > beaker - C        //  Cグラムの水を追加すると、ビーカーが入れることができる質量を超えるケース
//        or 0 > beaker - D)       //  Dグラムの水を追加すると、ビーカーが入れることができる質量を超えるケース
//    {
//        if (is_melt(water, sugar)) return -INF;  // 砂糖が溶け切るかの判定
//        return (100 * sugar) / (water + sugar);  // 100*Aグラムの水を追加すると、ビーカーが入れることができる質量を超えるケース
//    }
//    ans = max(ans, dfs(water+(100*A), sugar, beaker-(100*A)));
//    ans = max(ans, dfs(water+(100*B), sugar, beaker-(100*B)));
//    ans = max(ans, dfs(water, sugar+C, beaker-C));
//    ans = max(ans, dfs(water, sugar+D, beaker-D));
//}
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

int D;
long long G;
vector<long long> p, c;

int main() {
    cin >> D >> G;
    p.resize(D); c.resize(D);
    for (int i = 0; i < D; ++i)
        cin >> p[i] >> c[i];

    // 最小化問題なので大きな値を最初に設定
    long long res = 1 << 29;
    // bit全探索
    //   D個の得点について、各得点を選ぶかどうかで全探索
    for (int bit = 0; bit < (1 << D); ++bit) {
        long long sum = 0;
        long long num = 0;
        // 問題単位でイテレーション
        // 選択された問題を全部解く、という前提で全部解く場合の部分集合を取る
        // 部分集合の中で一番コストが小さいものを保持する
        for (int i = 0; i < D; ++i) {
            if (bit & (1 << i)) {
                // sum: i番目の問題を全部回答 + ボーナスポイント
                sum += c[i] + p[i] * 100 * (i+1);
                // num: 回答した問題数
                num += p[i];
            }
        }

        // 疑問：ここまでの結果では「全部解いた問題の部分集合の内最小コストのものが保持されている」が、
        // 全部解かずにおいたほうが良くなるケースはないのか？
        if (sum >= G)
            res = min(res, num);
        else {
            // 基準点に満たない場合の処理
            // Dは問題数なので、問題単位でループ
            // 疑問：大きい問題からイテレーションを回すのはなぜ？
            //   大きい問題の方が一問あたりの配点が高いから
            for (int i = D-1; i >= 0; --i) {
                // 既にスコアを計算してるパターンの場合？
                if (bit & (1 << i))
                    continue;
                // 問題の個数単位でループ 中途半端に解く考慮
                for (int j = 0; j < p[i]; ++j) {
                    if (sum >= G) break;
                    sum += 100 * (i+1);
                    ++num;
                }
            }
            res = min(res, num);
        }
    }
    cout << res << endl;
}

//int main()
//{
//    int D, G; cin >> D >> G;
//    vector<pair<int, int>> PC;
//    vector<int> scores(D);
//    rep (i, 0, D) {
//        int p, c; cin >> p >> c;
//        PC.emplace_back(p, c);
//        scores[i] = (i+1) * 100;
//    }
//
//    sort(PC.begin(), PC.end());
//
//    int ans = 0;
//    rep (i, 0, PC.size()) {
//        rep (j, 0, PC[i].first) {
//            ++ans;
//            G -= scores[i];
//            if (j+1 == PC[i].first)
//                G -= PC[i].second;
//            if (G <= 0) {
//                cout << ans << endl;
//                return 0;
//            }
//        }
//    }
//}
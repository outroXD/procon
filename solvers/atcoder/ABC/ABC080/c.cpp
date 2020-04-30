#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int N; // 店の数
int F[111][11]; // 営業時間
int P[111][11]; // 利益

/**
 * REF: https://qiita.com/nomikura/items/daf9aee0ef15a4489c1c
 */
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> F[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 11; j++) {
            cin >> P[i][j];
        }
    }

    long long ans = -1e15;
    // 自分の店を開ける(曜日、時間帯)の組み合わせは2**10 - 1通り。
    // 各パターンにおいて、利益を計算する。その最大値が答え。
    for (int mask = 1; mask < (1 << 10); mask++) {  // 全探索用イテレーション
        long long sum = 0;
        for (int i = 0; i < N; i++) {  // 店単位のイテレーション
            int cnt = 0;
            for (int j = 0; j < 10; j++) {  // 店の各データへのイテレーション
                if (((mask >> j) & 1) && F[i][j]) // 全探索の対象で、店がその日、オープンしているかどうか
                    cout << "j: " << j << endl;
                    cnt++;
            }
            cout << "i: " << i << endl;
            cout << "mask: " << mask << endl;
            cout << bitset<10>(mask) << endl;
            sum += P[i][cnt];
        }
        ans = max(ans, sum);
        cout << ans << endl;
        cout << "================" << endl;
     }
    cout << ans << endl;

    return 0;
}
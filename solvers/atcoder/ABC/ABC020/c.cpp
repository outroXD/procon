#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

vector<int> x;

const vector<pair<int, int>> direction = {
        make_pair(1, 0),  // 上
        make_pair(0, 1),  // 右
        make_pair(-1, 0), // 下
        make_pair(0, -1)  // 左
};

/**
 * このルートで許容可能なxの最大値を出力する
 * @param root
 * @param x
 * @param T
 * @return
 */
int calc_x(string root, int T)
{
    for (int i = T; i >= 0; i--) {
        int score = 0;
        for (auto c : root) {
            if (c == 'S') continue;
            else if (c == 'G' or c == '.') ++score;
            else score += i;
        }
        if (score > T) continue;
        else return i;
    }
}

/**
 * 地点Sから地点Gまでの経路を列挙する処理
 * @param map  探索対象の経路を保持した2次元配列
 * @param current_x  現在のx座標
 * @param current_y  現在のy座標
 * @param n  何巡目の処理かを管理する変数
 */
void dfs(vector<vector<char>> map, vector<vector<int>> memo,
         int current_y, int current_x, int n, int T, string root)
{
    // 終了条件①: 範囲外の場合
    if (current_y < 0 or current_x < 0 or current_y > map.size()-1 or current_x > map[0].size()-1)
        return;
    // 終了条件②: 既に探索済の場合
    if (memo[current_y][current_x] != -1)
        return;
    // ゴール地点である場合
    if (map[current_y][current_x] == 'G') {
        root += map[current_y][current_x];
        memo[current_y][current_x] = n;
        if (n <= T) { // T以内の場合
//            cout << root << endl;
//            cout << calc_x(root, T) << endl;
            x.push_back(calc_x(root, T));
//            rep (i, 0, memo.size()) {
//                rep (j, 0, memo[i].size()) {
//                    cout << memo[i][j] << " ";
//                }
//                cout << endl;
//            }
//            cout << endl;
        }
        return;
    }

    memo[current_y][current_x] = n;
    root += map[current_y][current_x];
    for (auto d : direction) {
        dfs(map, memo, current_y+d.second, current_x+d.first, n+1, T, root);
    }
}

int main()
{
    int H, W, T; cin >> H >> W >> T;
    vector<vector<char>> map;
    int start_x = 0, start_y = 0;
    rep (i, 0, H) {
        vector<char> m;
        rep (j, 0, W) {
            char c; cin >> c;
            if (c == 'S') {
                start_x = j;
                start_y = i;
            }
            m.push_back(c);
        }
        map.push_back(m);
    }

    vector<vector<int>> memo(H, vector<int>(W, -1));
    dfs(map, memo, start_y, start_x, 0, T, "");
    cout << *max_element(x.begin(), x.end()) << endl;
}
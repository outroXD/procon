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

const vector<tuple<int, int>> dxy = {
        make_pair(1, 0),  // 右
        make_pair(1, 1),  // 右 下
        make_pair(0, 1),  // 下
        make_pair(-1, 1),  // 下　左
        make_pair(-1, 0),  // 左
        make_pair(-1, -1),  // 左 上
        make_pair(0, -1),  // 上
        make_pair(1, -1),  // 右 上
};

int main()
{
    int H, W; cin >> H >> W;
    string board[50];
    rep (i, 0, H) cin >> board[i];

    rep (i, 0, H) {
        rep (j, 0, W) {
            if ('#' == board[i][j]) continue;

            int num = 0;
            rep (k, 0, dxy.size()) {
                const int x = j + get<0>(dxy[k]);
                const int y = i + get<1>(dxy[k]);

                if (y < 0 or H <= y) continue;
                if (x < 0 or W <= x) continue;
                if ('#' == board[y][x]) num++;
            }
            board[i][j] = char(num + '0');
        }
    }

    rep (i, 0, H) cout << board[i] << endl;
}
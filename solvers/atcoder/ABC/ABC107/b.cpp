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

int main()
{
    int H, W; cin >> H >> W;
    vector<string> A;
    rep (i, 0, H) {
        string in; cin >> in;
        A.push_back(in);
    }

    vector<bool> row(H, false);
    vector<bool> col(W, false);
    rep (i, 0, H) {
        rep (j, 0, W) {
            // 入力を走査して#がある部分をtrueでマークする
            if (A[i][j] == '#') {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    rep (i, 0, H) {
        if (row[i]) {  // #があった行を抽出
            rep (j, 0, W) {  // #があった列をイテレート
                if (col[j]) cout << A[i][j];  // #があった列を抽出
                // ここで全てがtrueの場合、省略できる行・列はなく、全てを出力する
            }
        }
        cout << endl;
    }
}
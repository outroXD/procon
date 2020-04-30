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
    int H, W; cin >> H >> W;
    vector<vector<char>> canvas;
    rep (i, 0, H) {
        vector<char> tmp;
        rep (j, 0, W) {
            char c; cin >> c;
            tmp.push_back(c);
        }
        canvas.push_back(tmp);
    }

    rep (i, 0, H) {
        rep (j, 0, W) {
            if (canvas[i][j] == '#') {
                if ((i-1) >= 0 && canvas[i-1][j] == '#') continue;  // upper
                if ((j-1) >= 0 && canvas[i][j-1] == '#') continue;  // left
                if ((H-1) >= (i+1) && canvas[i+1][j] == '#') continue;  // lower
                if ((W-1) >= (j+1) && canvas[i][j+1] == '#') continue;  // right

                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}
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
    int N, D; cin >> N >> D;
    vector<vector<int>> X;
    rep (i, 0, N) {
        vector<int> x;
        rep (j, 0, D) {
            int in; cin >> in;
            x.push_back(in);
        }
        X.push_back(x);
    }

    int ans = 0;
    vector<double> ans_vec;
    rep (i, 0, N) {  // iで行単位のイテレーション
        rep (j, i+1, N) {  // jでi以降の行をイテレーション
            int tmp = 0;
            rep (k, 0, D) {  // 項数のイテレーション
                tmp += pow(abs(X[i][k] - X[j][k]), 2);
            }

            bool flag = false;
            rrep (k, 0, tmp) {
                if (pow(k, 2) == tmp) flag = true;
            }
            if (flag) ++ans;
        }
    }

    cout << ans << endl;
}
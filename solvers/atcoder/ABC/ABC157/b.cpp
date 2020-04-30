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
    vector<vector<int>> A = vector<vector<int>>(3, vector<int>(3, 0));
    rep (i, 0, 3) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    int N; cin >> N;
    vector<vector<int>> ans = vector<vector<int>>(3, vector<int>(3, 0));
    rep (i, 0, N) {
        int b; cin >> b;
        rep (j, 0, 3) {
            rep (k, 0, 3) {
                if (b == A[j][k]) {
                    ans[j][k] = 1;
                }
            }
        }
    }

    // check
    rep (i, 0, 3) {
        if ((ans[i][0] == 1 and ans[i][1] == 1 and ans[i][2] == 1) or
                (ans[0][i] == 1 and ans[1][i] == 1 and ans[2][i] == 1)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if ((ans[0][0] == 1 and ans[1][1] == 1 and ans[2][2] == 1) or
            (ans[0][2] == 1 and ans[1][1] == 1 and ans[2][0] == 1)) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
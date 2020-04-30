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
    vector<vector<int>> C(3);
    rep (i, 0, 3) {
        rep (j, 0, 3) {
            int in; cin >> in;
            C[i].push_back(in);
        }
    }

    rrep (a1, 0, 100) {
        rrep (a2, 0, 100) {
            rrep (a3, 0, 100) {
                // b1
                if (C[0][0]-a1 != C[1][0]-a2) continue;
                if (C[0][0]-a1 != C[2][0]-a3) continue;
                if (C[1][0]-a2 != C[2][0]-a3) continue;
                // b2
                if (C[0][1]-a1 != C[1][1]-a2) continue;
                if (C[0][1]-a1 != C[2][1]-a3) continue;
                if (C[1][1]-a2 != C[2][1]-a3) continue;
                // b3
                if (C[0][2]-a1 != C[1][2]-a2) continue;
                if (C[0][2]-a1 != C[2][2]-a3) continue;
                if (C[1][2]-a2 != C[2][2]-a3) continue;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
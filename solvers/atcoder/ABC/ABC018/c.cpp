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

/**
 * 部分点解法：全探索
 */
int R, C, K;

bool check(int y, int x, vector<string> &arr)
{
    rep (i, 1, R+1) {
        rep (j, 1, C+1) {
            char s = arr[i-1][j-1];
            if (abs(i - x) + abs(j - y) <= (K - 1)) {
                if (s == 'x')
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    cin >> R >> C >> K;
    vector<string> s(R);
    rep (i, 0, R) cin >> s[i];

    int ans = 0;
    rrep (y, K, (C - K + 1)) {
        rrep (x, K, (R - K + 1)) {
            if (check(y, x, s))
                ++ans;
        }
    }

    cout << ans << endl;
}
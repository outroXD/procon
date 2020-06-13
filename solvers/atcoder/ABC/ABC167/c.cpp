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
#define each(i, map) for (auto& i : map)

bool is_complete(const vector<int> &tmp, const int &X)
{
    for (int i = 0; i < tmp.size(); ++i) {
        if (tmp[i] < X)
            return false;
    }
    return true;
}

int main()
{
    int N, M, X; cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M, 0));
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];
    }

    int ans = INF;
    for (int bit = 0; bit < (1 << N); ++bit) {
        int c = 0;
        vector<int> tmp(M, 0);
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                for (int m = 0; m < M; ++m) {
                    tmp[m] += A[i][m];
                }
                c += C[i];
            }
        }
        if (is_complete(tmp, X))
            ans = min(ans, c);
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
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
    int N, M; cin >> N >> M;
    vector<string> A, B;
    rep (i, 0, N) {
        string a; cin >> a;
        A.push_back(a);
    }
    rep (i, 0, M) {
        string b; cin >> b;
        B.push_back(b);
    }

    bool exists = false;
    rep (i, 0, N) {
        rep (j, 0, A[i].size()) {
            // これから比較するAの中のB分の大きさが範囲をはみ出ないかを判定
            if (i+M-1 >= N or j+M-1 >= N) continue;

            bool match = true;
            // Bの中身をイテレート
            rep (k, 0, M) {
                rep (l, 0, M) {
                    // A, Bの各要素を比較する
                    if (A[i+k][j+l] != B[k][l]) match = false;
                }
            }
            if (match) exists = true;
        }
    }

    if (exists) cout << "Yes" << endl;
    else cout << "No" << endl;
}
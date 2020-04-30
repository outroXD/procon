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
    int N; cin >> N;
    vector<int> H;
    rep (i, 0, N) {
        int h; cin >> h;
        H.push_back(h);
    }

    reverse(H.begin(), H.end());

    rep (i, 1, H.size()) {
        if (H[i-1] >= H[i]) continue;
        else if (H[i-1] == H[i]-1) H[i] -= 1;
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
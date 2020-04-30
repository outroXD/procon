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
    int N, M, X, Y; cin >> N >> M >> X >> Y;
    vector<int> X_vec, Y_vec;
    rep (i, 0, N) {
        int in; cin >> in;
        X_vec.push_back(in);
    }
    rep (i, 0, M) {
        int in; cin >> in;
        Y_vec.push_back(in);
    }

    int x_max = *max_element(X_vec.begin(), X_vec.end());
    int y_min = *min_element(Y_vec.begin(), Y_vec.end());
    rrep (i, X+1, Y) {
        if (x_max < i and y_min >= i) {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
}
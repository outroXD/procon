#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N, K, Q; cin >> N >> K >> Q;
    vector<int> points(N, K);
    rep (i, 0, Q) {
        int a; cin >> a;
        points[a-1] += 1;
    }

    rep (i, 0, points.size()) {
        if (points[i]-Q >= 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
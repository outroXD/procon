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
    int N; cin >> N;
    vector<int> D;
    rep (i, 0, N) {
        int d; cin >> d;
        D.push_back(d);
    }

    sort(D.begin(), D.end());
    int idx = (D.size() / 2) - 1;
    int l = D[idx];
    int r = *lower_bound(D.begin() + idx + 1, D.end(), l);
    cout << r - l << endl;
}

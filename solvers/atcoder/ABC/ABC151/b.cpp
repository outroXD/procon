#include "bits/stdc++.h"

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
    int N, K, M; cin >> N >> K >> M;
    vector<int> A(N-1);
    rep (i, 0, N-1) cin >> A[i];

    double x = N * M;
    rep (i, 0, A.size()) x -= A[i];
    x = round(x);

    if (0 > x) cout << 0 << endl;
    else if (x >= 0 and K >= x) cout << x << endl;
    else cout << -1 << endl;
}
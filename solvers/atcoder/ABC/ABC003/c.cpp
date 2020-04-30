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
    int N, K; cin >> N >> K;
    vector<int> R;
    rep (i, 0, N) {
        int r; cin >> r;
        R.push_back(r);
    }

    sort(R.begin(), R.end());

    double rate = 0;
    rep (i, N-K, N) {
        rate = (rate + R[i]) / 2.0;
    }
    printf("%.6f", rate);
}
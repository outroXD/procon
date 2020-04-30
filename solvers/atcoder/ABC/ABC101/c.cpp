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
    int N, K; cin >> N >> K;
    vector<int> A(N);
    rep (i, 0, N) cin >> A[i];

    int ans = 0, cnt = 0;
    while (true) {
        if (N <= 0) break;
        if (cnt == 0) N -= K;
        else N -= (K-1);
        ++ans;
        ++cnt;
    }
    cout << ans << endl;
}
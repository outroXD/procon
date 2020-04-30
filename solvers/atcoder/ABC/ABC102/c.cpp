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
    vector<long long> A(N), B(N);
    rep (i, 0, N) cin >> A[i];

    rep (i, 0, N) {
        B[i] = A[i] - (i+1);
    }

    sort(B.begin(), B.end());
    long long median = B[N / 2];
    long long ans = 0;
    rep (i, 0, N) {
        ans += abs(B[i] - median);
    }

    cout << ans << endl;
}
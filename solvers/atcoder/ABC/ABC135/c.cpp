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
    vector<int> A, B;
    rep (i, 0, N+1) {
        int a; cin >> a;
        A.push_back(a);
    }
    rep (i, 0, N) {
        int b; cin >> b;
        B.push_back(b);
    }

    long long ans = 0;
    rep (i, 0, N) {
        ans += min(A[i], B[i]);
        B[i] -= min(A[i], B[i]);
        A[i] -= min(A[i], B[i]);

        ans += min(A[i+1], B[i]);
        A[i+1] -= min(A[i+1], B[i]);
    }

    cout << ans << endl;
}
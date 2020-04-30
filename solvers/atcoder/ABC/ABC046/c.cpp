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
    vector<int> T(N), A(N);
    rep (i, 0, N) cin >> T[i] >> A[i];

    long long n = 1;
    rep (i, 0, N) {
        if (i != 0)
            n = max((T[i-1]*n + T[i]-1) / T[i], (A[i-1]*n + A[i]-1) / A[i]);
    }

    long long x = T[T.size()-1] * n;
    long long y = A[A.size()-1] * n;

    cout << x + y << endl;
}
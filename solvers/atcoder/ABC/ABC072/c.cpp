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
    long long N; cin >> N;
    map<long long, int> A;
    rep (i, 0, N) {
        long long a; cin >> a;
        ++A[a];
        ++A[a+1];
        ++A[a-1];
    }

    long long ans = 0;
    for (auto a : A) {
        if (a.second > ans) ans = a.second;
    }
    cout << ans << endl;
}
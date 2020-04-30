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

long long solve(long long N)
{
    if (N % 2 == 1)
        return 0;

    long long res = 0;
    N /= 2;
    while (N) {
        res += N / 5;
        N /= 5;
    }
    return res;
}

int main()
{
    long long N; cin >> N;

    cout << solve(N) << endl;
}
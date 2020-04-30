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

long long iterative_square(long long N, long long P, long long MOD)
{
    if (P == 0)
        return 1;
    if (P % 2 == 0) {
        long long t = iterative_square(N, P/2, MOD);
        return t * t % MOD;
    }
    return (N * iterative_square(N, P-1, MOD)) % MOD;
}

int main()
{
}
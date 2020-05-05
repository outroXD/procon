#include <iostream>
#include <vector>

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
    long long N, K; cin >> N >> K;

    long long ans = 0;
    for (long long k = K; k <= N+1; k++) {
        long long n1 = k * (k - 1) / 2;
        long long n2 = k * (2 * N - k + 1) / 2;
        long long sub = n2 - n1 + 1;
        ans = (ans + sub) % MOD;
    }

    cout << ans << endl;
}
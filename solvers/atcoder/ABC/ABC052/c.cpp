#include <iostream>
#include <map>

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
    long long N; cin >> N;
    map<long long, int> map;

    rrep (i, 2, N) {
        int x = i;
        rrep (j, 2, x) {
            while (x % j == 0) {
                x /= j;
                map[j]++;
            }
        }
    }

    long long ans = 1;
    for (auto mp : map) {
        ans = ((ans % MOD) * (mp.second+1)%MOD) % MOD;
    }
    cout << ans << endl;
}
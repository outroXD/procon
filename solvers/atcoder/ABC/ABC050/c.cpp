#include <iostream>
#include <vector>
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
    vector<long long> A(N);
    map<long long, long long> map;
    rep (i, 0, N) {
        cin >> A[i];
        map[A[i]]++;
    }

    if (A.size() % 2 == 0) {
        for (int i = 1; i < A.size(); i += 2) {
            if (map[i] != 2) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    else {
        for (int i = 0; i < A.size(); i += 2) {
            if (i == 0) {
                if (map[i] != 1) {
                    cout << 0 << endl;
                    return 0;
                }
            }
            else if (map[i] != 2) {
                cout << 0 << endl;
                return 0;
            }
        }
    }

    long long ans = 1;
    for (auto mp : map) {
        ans *= mp.second;
        ans %= MOD;
    }
    cout << ans % MOD << endl;
}
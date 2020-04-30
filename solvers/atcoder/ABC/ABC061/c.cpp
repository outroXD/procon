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
    long long N, K; cin >> N >> K;
    map<long long, long long> vals;
    for (int i = 0; i < N; i++) {
        long long a, b; cin >> a >> b;
        vals[a] += b;
    }
    long long counter = 0;
    for (auto& val : vals) {
        counter += val.second;
        if (K <= counter) {
            cout << val.first << endl;
            return 0;
        }
    }
}
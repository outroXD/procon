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
    map<long long, long long> map;
    for (long long i = 0; i < N; i++) {
        long long in; cin >> in;
        ++map[in];
    }

    for (auto mp : map) {
        if (mp.second != 1) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
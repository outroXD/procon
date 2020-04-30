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
    vector<long long> a(N), a_cp;
    rep (i, 0, N) cin >> a[i];
    copy(a.begin(), a.end(), back_inserter(a_cp));
    sort(a.begin(), a.end());

    map<long long, long long> map;
    long long cnt = 0;
    rep (i, 0, N) {
        if (map.find(a[i]) == map.end()) {
            map[a[i]] = cnt;
            ++cnt;
        }
    }

    rep (i, 0, N) {
        cout << map.at(a_cp[i]) << endl;
    }
}
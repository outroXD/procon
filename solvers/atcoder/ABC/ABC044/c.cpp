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

/**
 * 部分点解法
 */
int main()
{
    int N; double A; cin >> N >> A;
    vector<long long> x(N);
    rep (i, 0, N) cin >> x[i];

    long long cnt = 0;
    for (long long bit = 0; bit < (1<<N); ++bit) {
        vector<long long> idx;
        for (long long i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                idx.push_back(i);
            }
        }

        double sum = 0;
        for (auto id : idx)
            sum += x[id];

        if (idx.size() != 0)
            sum /= idx.size();

        if (A == sum) {
            ++cnt;
        }
    }
    cout << cnt << endl;
}
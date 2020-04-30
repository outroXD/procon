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

long long N, K;
vector<long long> a, b;

bool check(int64_t X)
{
    int64_t cnt = 0;
    for (int i = 0; i < N; ++i) {
        auto it = upper_bound(b.begin(), b.end(), X / a[i]);
        cnt += it - b.begin();
    }
    return cnt >= K;
}

int main()
{
    cin >> N >> K;
    a.resize(N);
    b.resize(N);
    rep (i, 0, N) cin >> a[i];
    rep (i, 0, N) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int64_t ng = 0, ok = 1e+18;
    while (ok - ng > 1) {
        int64_t mid = (ng + ok) / 2;
        if (check(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;
}

/**
 * 部分点解法
 */
int main_5()
{
    long long N, K; cin >> N >> K;
    vector<long long> a(N), b(N);
    rep (i, 0, N) cin >> a[i];
    rep (i, 0, N) cin >> b[i];

    vector<long long> ans;
    for (auto &i : a) {
        for (auto &j : b) {
            ans.push_back(i * j);
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans [K-1] << endl;
}
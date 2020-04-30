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
    long long N, K, tmp = 0; cin >> N >> K; --K;
    vector<long long> a(N), ans;
    rep (i, 0, N) {
        cin >> a[i];
        if (i <= K) tmp += a[i];
        if (i == K) ans.push_back(tmp);
        else if (i > K) ans.push_back(a[i] + ans[ans.size()-1] - a[ans.size()-1]);
    }
    cout << accumulate(ans.begin(), ans.end(), 0ll) << endl;
}
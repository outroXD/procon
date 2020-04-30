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
    long long N, X; cin >> N >>X;
    vector<long long> x(N);
    for (long long i = 0; i < N; i++)
        cin >> x[i];
    x.push_back(X);

    sort(x.begin(), x.end());
    vector<long long> dist;
    for (long long i = 1; i < x.size(); i++)
        dist.push_back(x[i] - x[i-1]);

    long long ans = dist[0];
    for (long long i = 1; i < dist.size(); i++)
        ans = __gcd(ans, dist[i]);

    cout << ans << endl;
}
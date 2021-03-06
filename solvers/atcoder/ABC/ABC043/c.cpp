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
    vector<int> a(N);
    double mean = 0;
    rep (i, 0, N) {
        cin >> a[i];
        mean += a[i];
    }
    mean = round(mean / a.size());

    long long cost = 0;
    rep (i, 0, N) {
        if (mean != a[i])
            cost += pow(a[i] - mean, 2);
    }

    cout << cost << endl;
}
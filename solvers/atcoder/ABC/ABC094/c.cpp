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
    vector<long long> X, CP_X;
    rep (i, 0, N) {
        long long in; cin >> in;
        X.push_back(in); CP_X.push_back(in);
    }

    sort(CP_X.begin(), CP_X.end());
    long long med_a = CP_X[N/2-1];
    long long med_b = CP_X[N/2];
    rep (i, 0, N) {
        if (X[i] < med_b) cout << med_b << endl;
        else cout << med_a << endl;
    }
}
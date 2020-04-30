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
    long long n; cin >> n;
    vector<long long> odd, even;
    rep (i, 0, n) {
        long long a; cin >> a;
        if (i % 2 != 0) odd.push_back(a);
        else even.push_back(a);
    }

    if (n % 2 == 0) {
        reverse(odd.begin(), odd.end());
        rep (i, 0, odd.size()) cout << odd[i] << " ";
        rep (i, 0, even.size()) cout << even[i] << " ";
    }
    else {
        reverse(even.begin(), even.end());
        rep (i, 0, even.size()) cout << even[i] << " ";
        rep (i, 0, odd.size()) cout << odd[i] << " ";
    }
    cout << endl;
}
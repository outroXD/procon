#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int A, B, K, max_v; cin >> A >> B >> K;
    max_v = max(A, B);
    vector<int> ans;
    rrep (i, 1, max_v) {
        if (A % i == 0 and B % i == 0) ans.push_back(i);
    }
    reverse(ans.begin(), ans.end());
    cout << ans[K-1] << endl;
}
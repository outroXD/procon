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
    rep (i, 0, N) cin >> a[i];

    long long ans = 0;
    int right = 1;
    rep (left, 0, a.size()) {
        while (right < N and (right <= left or a[right-1] < a[right])) {
            ++right;
        }
        ans += right - left;
        if (left == right) ++right;
    }

    cout << ans << endl;
}
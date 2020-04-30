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
    long long N, x, ans = 0; cin >> N >> x;
    vector<long long> a(N);
    cin >> a[0];
    rep (i, 1, N) {
        cin >> a[i];
        if (a[i-1] + a[i] > x) { // 制約条件を満たさない場合
            long long diff = abs(x - a[i-1] - a[i]);  // 何回「操作」を行う必要があるか
            if (0 > a[i] - diff) {  // a[i-1]からも差し引く必要がある場合
                a[i-1] -= (diff - a[i]);
                a[i] = 0;
            }
            else {
                a[i] -= diff;
            }
            ans += diff;
        }
    }

    cout << ans << endl;
}
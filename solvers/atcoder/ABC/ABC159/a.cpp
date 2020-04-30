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
    int N, M; cin >> N >> M;

    int ans = 0;
    if (1 < N) {
        int tmp = (N * (N-1)) / 2;
        ans += tmp;
    }

    if (1 < M) {
        int tmp = (M * (M-1)) / 2;
        ans += tmp;
    }

    cout << ans << endl;
}
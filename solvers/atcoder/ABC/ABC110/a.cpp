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

int ctoi(const char c)
{
    if('0' <= c && c <= '9') return (c-'0');
    return -1;
}

int main()
{
    int A, B, C; cin >> A >> B >> C;
    int ans = max<int>({
        10*A + B + C,
        A + 10*B + C,
        A + B + 10*C
    });
    cout << ans << endl;
}
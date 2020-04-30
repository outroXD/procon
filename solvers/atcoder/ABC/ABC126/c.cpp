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

int coin_through_num(const int& K, const int& i)
{
    int ans = 0, tmp = i;
    while (true) {
        if (K <= tmp) return ans;
        tmp *= 2;
        ++ans;
    }
}

int main()
{
    int N, K; cin >> N >> K;

    double ans = 0.0;
    rrep (i, 1, N) {
        if (i <= K-1) {
            int head_n = coin_through_num(K, i);
            ans += ((1.0/N) * pow(0.5, head_n));
        }
        else ans += 1.0/N;
    }
    printf("%.10f", ans);
}
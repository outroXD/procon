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

int calc(int x)
{
    int ret = 0;
    // 100で割り切れるまで割る
    while (x % 100 == 0) {
        x /= 100;
        ++ret;
    }
    return ret;
}

int main()
{
    int D, N; cin >> D >> N;
    int cnt = 0, val = 0;
    while (cnt < N) {
        ++val;
        // valが100で何回割れるかをcalcで計算
        // それがDと等しいならばインクリメント
        // 最初に解いたとき「ちょうど」という文言を読み落としていた
        if (calc(val) == D) ++ cnt;
    }
    cout << val << endl;
    return 0;
}
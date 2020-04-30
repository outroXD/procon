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
    vector<long long> A(N), B(N), C(N);
    rep (i, 0, N) cin >> A[i];
    rep (i, 0, N) cin >> B[i];
    rep (i, 0, N) cin >> C[i];

    sort(A.begin(), A.end());
    sort(C.begin(), C.end());

    long ans = 0;
    rep (i, 0, N) {  // B固定
        // 配列Aの要素において、値がB[i]未満の要素の数を計算する
        auto iter_a = lower_bound(A.begin(), A.end(), B[i]);
        // long num_a = iter_a - A.begin();
        long num_a = distance(A.begin(), iter_a);

        // 配列Cの要素において、値がB[i]より大きい要素の数を計算する
        auto iter_c = upper_bound(C.begin(), C.end(), B[i]);
        // long num_c = C.end() - iter_c;
        long num_c = N - distance(C.begin(), iter_c);

        ans += num_a * num_c;
    }

    cout << ans << endl;
}
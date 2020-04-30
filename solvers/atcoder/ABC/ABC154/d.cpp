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
    int N, K; cin >> N >> K;
    vector<long long> p(N);
    rep (i, 0, N) cin >> p[i], ++p[i];

    vector<long long> s(N+1, 0);
    rep (i, 0, N) s[i+1] = s[i] + p[i];

    long long res = 0;
    for (int i = 0; i+K <= N; ++i) {
        res = max(res, s[i+K] - s[i]);
    }

    cout << fixed << setprecision(10) << (double)(res)/2 << endl;
}

/**
 * TLE
 */
//double table[1000];
//
//void init_table()
//{
//    table[0] = 1;
//    for (double i = 2; i <= 1000; i++)
//        table[(int)i-1] = (table[(int)i-2] + i);
//    for (int i = 1; i <= 1000; i++)
//        table[i-1] = table[i-1] / i;
//}
//
//int main()
//{
//    long long N, K; cin >> N >> K;
//    vector<int> p(N);
//    rep (i, 0, N) {
//        cin >> p[i];
//        --p[i];
//    }
//    init_table();
//
//    vector<double> cul(N-K+1);
//    rrep (i, 0, N-K) {
//        rep (j, i, i+K) {
//            cul[i] += table[p[j]];
//        }
//    }
//
//    double ans = 0;
//    rep (i, 0, cul.size()) {
//        ans = max(ans, cul[i]);
//    }
//    printf("%.6f", ans);
//}
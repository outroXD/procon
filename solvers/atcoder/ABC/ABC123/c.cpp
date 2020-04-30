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
    long long N; cin >> N;
    vector<long long> A;
    rep (i, 0, 5) {
        long long in; cin >> in;
        A.push_back(in);
    }

    sort(A.begin(), A.end());
    cout << (N + A[0] - 1) / A[0] + 4 << endl;
}


/**
 * 愚直にシュミレーションするパターン
 * これは間に合わない
 */
//int main()
//{
//    long long N; cin >> N;
//    vector<long long> costs;
//    for (int i = 5; i > 0; --i) {
//        long long in; cin >> in;
//        costs.push_back(in);
//    }
//
//    vector<long long> city(6, 0); city.at(0) = N;
//    long long ans = 1;
//    while (true) {
//        for (int i = 5; i >= 1; --i) {
//            if (city.at(5) == N) {
//                cout << ans << endl;
//                return 0;
//            }
//            city.at(i) += min(city.at(i-1), costs.at(i-1));
//            city.at(i-1) = max(0ll, city.at(i-1)-costs.at(i-1));
//        }
//        ++ans;
//    }
//}
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

    long long res = N;
    for (long long i = 1ll; i*i <= N; i++) {
        if (N % i != 0) continue;
        long long b = N / i;
        res = min(res, i + b - 2);
    }

    cout << res << endl;
}

//　不正解
//map<int64_t, int> prime_factor(int64_t n)
//{
//    map<int64_t, int> ret;
//    for(int64_t i = 2; i * i <= n; i++) {
//        while(n % i == 0) {
//            ret[i]++;
//            n /= i;
//        }
//    }
//    if(n != 1) ret[n] = 1;
//    return ret;
//}
//
//int main()
//{
//    long long N; cin >> N;
//
//    vector<int64_t> prime_n;
//    for(auto p : prime_factor(N)) {
//        while (p.second--) {
//            prime_n.push_back(p.first);
//        }
//    }
//
//    long long res = INF;
//    if (prime_n.size() == 1) {
//        cout << prime_n[0] << endl;
//        return 0;
//    }
//    else {
//        rep (i, 0, prime_n.size()) {
//            long long res_tmp = max(1ll, prime_n[i]-1ll);
//
//            vector<int64_t> prime_n_cp;
//            copy(prime_n.begin(), prime_n.end(), back_inserter(prime_n_cp));
//            prime_n_cp.erase(prime_n_cp.begin()+i);
//
//            long long prod = accumulate(prime_n_cp.begin(), prime_n_cp.end(), 1, [](int acc, int i) {
//                return acc * i;
//            });
//            res_tmp += (prod - 1ll);
//            res = min(res, res_tmp);
//        }
//    }
//    cout << res << endl;
//}
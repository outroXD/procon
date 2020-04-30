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
    long long N, K; cin >> N >> K;
    vector<long long> s(N);
    rep (i, 0, N) {
        cin >> s[i];
        if (s[i] == 0) {
            cout << N << endl;
            return 0;
        }
    }

    long long ans = 0;
    long long right = 0;
    long long tmp = 1;
    rep (left, 0, N) {
        while (right < N and K >= tmp * s[right]) {
            tmp *= s[right];
            ++right;
        }
        ans = max(ans, right - left);
        if (left == right) ++right;
        else tmp /= s[left];
    }

    cout << ans << endl;
}

//int main()
//{
//    long long N, K; cin >> N >> K;
//    vector<long long> s(N);
//    rep (i, 0, N) {
//        cin >> s[i];
//        if (s[i] == 0) {
//            cout << N << endl;
//            return 0;
//        }
//    }
//
//    long long ans = 0;
//    long long right = 0;
//    long long tmp = 1;
//    rep (left, 0, N) {
//        while (right < N and (right == left or K >= tmp * s[right])) {
//            tmp *= s[right];
//            ++right;
//        }
//        ans = max(ans, right - left);
//        if (left == right) ++right;
//        else tmp /= s[left];
//    }
//
//    cout << ans << endl;
//}
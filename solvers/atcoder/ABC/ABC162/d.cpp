#include <iostream>
#include <algorithm>

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
    string S; cin >> S;

    long long r = 0, g = 0, b = 0;
    for (auto c : S) {
        if (c == 'r') ++r;
        else if (c == 'g') ++g;
        else if (c == 'b') ++b;
    }

    long long all = r * g * b, sub = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; ++j) {
            if (S[i] == S[j]) continue;
            int k = 2*j - i;
            if (k >= N or S[k] == S[i] or S[k] == S[j]) continue;
            ++sub;
        }
    }

    cout << all - sub << endl;
}

/**
 * TLE
 */
//int main()
//{
//    int N; cin >> N;
//    string S; cin >> S;
//
//    int ans = 0;
//    rep (i, 0, N) {
//        rep (j, 0, i) {
//            rep (k, 0, j) {
//                if (S[i] == S[j] or S[i] == S[k] or S[j] == S[k]) continue;
//                if (j-i == k-j) continue;
//                ++ans;
//            }
//        }
//    }
//    cout << ans << endl;
//}
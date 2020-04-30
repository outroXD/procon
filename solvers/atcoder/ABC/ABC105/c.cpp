#include <bits/stdc++.h>
#include <time.h>
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
    string str = "";

    while (N != 0) {
        int r = N % 2;
        if (r < 0) r += 2;

        N = (N - r) / (-2);

        str += (char)('0' + r);
    }

    reverse(str.begin(), str.end());
    if (str == "") str = "0";
    cout << str << endl;
}

// 2進数展開
//int main()
//{
//    int N; cin >> N;
//    string ans = "";
//
//    while (N != 0) {
//        int r = N % 2;
//        N = (N - r) / 2;
//        ans += (char)('0' + r);
//    }
//
//    reverse(ans.begin(), ans.end());
//    cout << ans << endl;
//}

// 3進数展開
//int main()
//{
//    int N; cin >> N;
//    string ans = "";
//
//    while (N != 0) {
//        int r = N % 3;
//        N = (N - r) / 3;
//        ans += (char)('0' + r);
//    }
//    reverse(ans.begin(), ans.end());
//    cout << ans << endl;
//}

// Nを2 or -2で割る場合 最終的には0になる
//int main()
//{
//    int N; cin >> N;
//    while (N != 0) {
//        cout << N << " → ";
//        N /= -2;
//        cout << N << endl;
//    }
//}

// 全探索では間に合わない
//int main()
//{
//    int N, n = 0; cin >> N;
//    while (true) {
//        for (int bit = 0; bit < (1 << n); ++bit) {
//            vector<int> S;
//            for (int i = 0; i < n; ++i) {
//                if (bit & (1 << i)) {
//                    S.push_back(i);
//                }
//            }
//
//            int tmp = 0;
//            for (int i : S) {
//                tmp += pow(-2, i);
//            }
//
//            vector<int> ans(n);
//            if (N == tmp) {
//                for (int i : S) {
//                    ans[i] = 1;
//                }
//                reverse(ans.begin(), ans.end());
//                for (auto i : ans) {
//                    cout << i;
//                }
//                cout << endl;
//                return 0;
//            }
//        }
//        ++n;
//    }
//}
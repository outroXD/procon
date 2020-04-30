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

int main()
{
    vector<int> vec, P = { 0, 1, 2, 3, 4 };;
    rep (i, 0, 5) {
        int in; cin >> in;
        vec.push_back(in);
    }
    int final_answer = INF;
    do {
        int ans = 0;
        rep (i, 0, 5) {
            while (ans % 10 != 0) ans++;
            ans += vec[P[i]];
        }
        final_answer = min(final_answer, ans);
    } while (next_permutation(P.begin(), P.end()));
    cout << final_answer << endl;
}
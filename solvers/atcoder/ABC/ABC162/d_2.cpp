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
    string S; cin >> S;

    long long r = 0, g = 0, b = 0;
    for (auto c : S) {
        if (c == 'R') ++r;
        else if (c == 'G') ++g;
        else if (c == 'B') ++b;
    }

    long long total = r * g * b;
    long long sub = 0l;
    rep (i, 0, N) {
        rep (j, i+1, N) {
            if (S[i] == S[j]) continue;
            int k = 2 * j - i;
            if (k >= N or S[i] == S[k] or S[j] == S[k]) continue;
            ++sub;
        }
    }

    cout << (total - sub) << endl;
}
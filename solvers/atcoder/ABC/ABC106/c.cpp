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
    string S; cin >> S;
    long long K; cin >> K;

    for (long long i = 0; i < K; ++i) {
        if (S[i] != '1') {
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << '1' << endl;
}
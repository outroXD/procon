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
#define each(i, map) for (auto& i : map)

int main()
{
    int K; cin >> K;
    string S; cin >> S;

    if (S.size() <= K)
        cout << S;
    else {
        rep (i, 0, K) cout << S.at(i);
        cout << "...";
    }
    cout << endl;

    return 0;
}
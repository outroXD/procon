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
    vector<int> ABC;
    rep (i, 0, 3) {
        int in; cin >> in;
        ABC.push_back(in);
    }
    int K, ans; cin >> K;
    std::vector<int>::iterator iter = std::max_element(ABC.begin(), ABC.end());
    size_t index = std::distance(ABC.begin(), iter);
    rep (i, 0, K) ABC[index] = ABC[index] * 2;
    ans = std::accumulate(ABC.begin(), ABC.end(), 0);
    cout << ans << endl;
}
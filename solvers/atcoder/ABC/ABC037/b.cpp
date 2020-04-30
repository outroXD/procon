#include <iostream>
#include <vector>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N, Q; cin >> N >> Q;
    vector<int> ans(N);
    rep (i, 0, Q) {
        int L, R, T; cin >> L >> R >> T;
        rep (j, L-1, R) ans[j] = T;
    }
    for (auto v : ans) cout << v << endl;
}
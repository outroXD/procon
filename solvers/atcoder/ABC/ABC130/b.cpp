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
    int N, X, before = 0; cin >> N >> X;
    vector<int> bound, filtered; bound.push_back(0);
    rep (i, 0, N) {
        int l; cin >> l;
        before += l;
        bound.push_back(before);
    }

    copy_if(bound.begin(), bound.end(), back_inserter(filtered), [&X](int l){return l <= X;});
    cout << filtered.size() << endl;
}
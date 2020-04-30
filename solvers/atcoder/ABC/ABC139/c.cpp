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
    int N; cin >> N;
    vector<int> ans;
    int cnt = 0, before_h; cin >> before_h;
    rep (i, 0, N-1) {
        int h; cin >> h;
        if (h > before_h) {
            ans.push_back(cnt);
            cnt = 0;
        } else {
            cnt++;
        }
        before_h = h;
    }
    ans.push_back(cnt);

    cout << *max_element(ans.begin(), ans.end()) << endl;
}
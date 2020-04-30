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
    vector<int> vec(3);
    rep (i, 0, 3) cin >> vec[i];
    sort(vec.begin(), vec.end());

    long long ans = 0;
    int diff = vec[2]*3 - accumulate(vec.begin(), vec.end(), 0);
    if (diff % 2 == 0) ans += (vec[2]-vec[1] + vec[2]-vec[0])/2;
    else {
        ans += 2;
        ans += (vec[2]-vec[1] + vec[2]-vec[0])/2;
    }

    cout << ans << endl;
}
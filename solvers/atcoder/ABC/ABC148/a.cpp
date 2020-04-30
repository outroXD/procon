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
    vector<bool> ABC(3, false);
    rep (i, 0, 2) {
        int in; cin >> in;
        if (in == 1)
            ABC[0] = true;
        else if(in == 2)
            ABC[1] = true;
        else if (in == 3)
            ABC[2] = true;
    }

    rep (i, 0, ABC.size()) {
        if (ABC[i] == false) {
            cout << i+1 << endl;
            return 0;
        }
    }
}
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
    int A, B, C, D; cin >> A >> B >> C >> D;

    while (true)
    {
        C -= B;
        if (C <= 0) {
            cout << "Yes" << endl;
            return 0;
        }
        A -= D;
        if (A <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
}
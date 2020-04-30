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
    long long H, attack = 0, monster = 1; cin >> H;
    while (true) {
        if (H == 1) {
            cout << (2 * monster) - 1 << endl;
            return 0;
        }
        else if (H > 1) {
            ++attack;
            monster *= 2;
            H = floor(H/2);
        }
    }
}
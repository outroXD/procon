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
    int N; cin >> N;

    int total = 0;
    rrep (i, 1, 9) {
        rrep (j, 1, 9) {
            int val = i * j;
            total += val;
        }
    }

    rrep (i, 1, 9) {
        rrep (j, 1, 9) {
            int val = i * j;
            if (total - val == N)
                cout << i << " x " << j << endl;
        }
    }
}
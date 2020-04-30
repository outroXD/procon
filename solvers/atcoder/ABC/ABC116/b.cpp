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
    int s; cin >> s;
    set<int> set = {s};
    int cnt = 1;
    while (cnt != 1000000) {
        if (s%2 == 0) {
            if (set.find(s/2) != set.end()) {
                cout << cnt+1 << endl;
                return 0;
            }
            set.insert(s/2);
            s = s/2;
        }
        else {
            if (set.find(3*s + 1) != set.end()) {
                cout << cnt+1 << endl;
                return 0;
            }
            set.insert(3*s + 1);
            s = 3*s + 1;
        }
        cnt++;
    }
}
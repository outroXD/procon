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
#define each(i, map) for (auto& i : map)

int main()
{
    int N; cin >> N;

    int mod = N % 10;
    if (mod == 2 or mod == 4 or mod == 5 or mod == 7 or mod == 9)
        cout << "hon" << endl;
    else if (mod == 0 or mod == 1 or mod == 6 or mod == 8)
        cout << "pon" << endl;
    else
        cout << "bon" << endl;

    return 0;
}
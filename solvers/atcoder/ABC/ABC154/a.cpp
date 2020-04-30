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
    string S, T; cin >> S >> T;
    int A, B; cin >> A >> B;
    string U; cin >> U;

    if (S == U) --A;
    else if (T == U) --B;

    cout << A << " " << B << endl;
}
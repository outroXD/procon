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
    int A, B, C; cin >> A >> B >> C;
    if (A == B and B == C and A == C) cout << "No" << endl;
    else if (A == B or B == C or A == C) cout << "Yes" << endl;
    else cout << "No" << endl;
}
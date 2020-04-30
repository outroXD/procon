#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (long long i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    long long A, B, C, D; cin >> A >> B >> C >> D;

    long long bc = B/C, bd = B/D;
    long long g = __gcd(C, D);
    long long bu = B / ((C*D)/g);
    long long ac = (A-1)/C, ad = (A-1)/D;
    long long au = (A-1) / ((C*D)/g);
    long long l = B - bc - bd + bu;
    long long r = (A-1) - ac - ad + au;

    cout << l - r << endl;
}
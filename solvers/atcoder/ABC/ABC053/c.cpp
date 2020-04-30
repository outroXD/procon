#include <iostream>
#include <vector>
#include <numeric>

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
    long long x; cin >> x;

    long long num_a = (x / 11) * 2;

    if (x % 11 == 0) {
    }
    else if (x % 11 > 6) {
        num_a += 2;
    }
    else {
        num_a += 1;
    }

    cout << num_a << endl;
}
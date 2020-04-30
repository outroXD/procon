#include <iostream>
#include <map>

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

template<typename T>
bool is_prime(T x)
{
    if (x <= 1)
        return false;
    for (T i = 2; i*i <= x; i++) {
        if (x%i == 0) return false;
    }
    return true;
}

int main()
{
    long long X; cin >> X;
    while (true) {
        if (is_prime(X)) {
            cout << X << endl;
            return 0;
        }
        ++X;
    }
}
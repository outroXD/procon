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

int calc_digit(long long n) {
    int res = 0;
    while (n > 0) {
        ++res;
        n /= 10;
    }
    return res;
}

int main()
{
    long long N; cin >> N;

    long long res = LINF;
    // sqrt(N) >= A ⇄ N >= A^2
    for (long long a = 1; a*a <= N; ++a) {
        if (N % a != 0) continue;
        long long b = N / a;
        long long tmp = max(calc_digit(a), calc_digit(b));
        res = min(res, tmp);
    }

    cout << res << endl;
}
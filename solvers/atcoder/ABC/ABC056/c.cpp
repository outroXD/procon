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

//long long solve(long long index, vector<int64_t> divs, long long X, long long now)
//{
//    if (index > divs.size())
//        return LINF;
//    if (X == now)
//        return index;
//
//    return std::min({solve(index + 1, divs, X, now + divs[index]),
//                     solve(index + 1, divs, X, now - divs[index]),
//                     solve(index + 1, divs, X, now)});
//}

int main()
{
    long long X; cin >> X;

    long long tmp = 0;
    for (long long i = 1; i <= X; ++i) {
        tmp += i;
        if (tmp >= X) {
            cout << i << endl;
            return 0;
        }
    }
}
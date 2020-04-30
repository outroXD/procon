#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define prep(i, a, b) for (int i = a; i < b; i++)
#define prrep(i, a, b) for (int i = a; i >= b; i++)
#define mrep(i, a, b) for (int i = a; i >= b; --i)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}

int main()
{
    int N; cin >> N;
    vector<int> A;
    prep (i, 0, N) {
        int in; cin >> in;
        A.push_back(in);
    }

    vector<int> left(N+1, 0), right(N+1, 0);
    prep (i, 0, N) left[i+1] = gcd(left[i], A[i]);
    mrep (i, N-1, 0) right[i] = gcd(right[i+1], A[i]);

    int res = 0;
    prep (i, 0, N) {
        res = max(res, gcd(left[i], right[i+1]));
    }

    cout << res << endl;
}
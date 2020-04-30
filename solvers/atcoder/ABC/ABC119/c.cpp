#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int N, A, B, C;
vector<int> L;

int rec(int idx, int a, int b, int c)
{
    if (idx == N) {
        if (a == 0 or b == 0 or c == 0) return INF;
        return abs(a - A) + abs(b - B) + abs(c - C);
    }

    int res = rec(idx+1, a, b, c);

    res = min(res, rec(idx+1, a+L[idx], b, c) + (a ? 10 : 0));
    res = min(res, rec(idx+1, a, b+L[idx], c) + (b ? 10 : 0));
    res = min(res, rec(idx+1, a, b, c+L[idx]) + (c ? 10 : 0));

    return res;
}

int main()
{
    cin >> N >> A >> B >> C;
    rep (i, 0, N) {
        int l; cin >> l;
        L.push_back(l);
    }

    cout << rec(0, 0, 0, 0) << endl;
}
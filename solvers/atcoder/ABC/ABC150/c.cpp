#include <bits/stdc++.h>

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

bool check(vector<int> arr_a, vector<int> arr_b)
{
    rep (i, 0, arr_a.size()) {
        if (arr_a[i] != arr_b[i]) return false;
    }
    return true;
}

int main()
{
    int N; cin >> N;
    vector<int> P(N), Q(N);
    rep (i, 0, N) cin >> P[i];
    rep (i, 0, N) cin >> Q[i];

    vector<int> nums(N);
    iota(nums.begin(), nums.end(), 1);
    int cnt = 0, a = 0 , b = 0;
    do {
        ++cnt;
        if (check(P, nums)) a = cnt;
        if (check(Q, nums)) b = cnt;
        if (a != 0 and b != 0) break;
    } while (next_permutation(nums.begin(), nums.end()));

    cout << abs(a - b) << endl;
}
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
    int N; cin >> N;
    vector<int> A, CP_A;
    rep (i, 0, N) {
        int a; cin >> a;
        A.push_back(a);
    }

    copy(A.begin(), A.end(), back_inserter(CP_A));

    auto max_iter = max_element(A.begin(), A.end());
    int max_idx = distance(A.begin(), max_iter);
    int max_val = A[max_idx];
    A.erase(max_iter);
    auto pre_max_iter = max_element(A.begin(), A.end());
    int pre_max_idx = distance(A.begin(), pre_max_iter);
    int pre_max_val = A[pre_max_idx];

    rep (i, 0, CP_A.size()) {
        if (max_idx != i) cout << max_val << endl;
        else cout << pre_max_val << endl;
    }

    return 0;
}
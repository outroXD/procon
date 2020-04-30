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

pair<int, int> target_element(vector<int> vec)
{
    int index = 0;
    int val = vec[0];
    rep (i, 1, vec.size()) {
        if (abs(val) > abs(vec[i])) {
            index = i;
            val = vec[i];
        }
    }
    return make_pair(index, val);
}

int main()
{
    int N, L; cin >> N >> L;
    vector<int> tastes;
    rrep (i, 1, N) tastes.push_back(L + i - 1);

    pair<int, int> pair = target_element(tastes);
    tastes.erase(tastes.begin() + pair.first);
    int sum = accumulate(tastes.begin(), tastes.end(), 0);
    cout << sum << endl;
}
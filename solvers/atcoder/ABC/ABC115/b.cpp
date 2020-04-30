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

int main()
{
    int N; cin >> N;
    vector<int> vec;
    rep (i, 0, N) {
        int in; cin >> in;
        vec.push_back(in);
    }
    int max_val = *max_element(vec.begin(), vec.end());
    vector<int>::iterator iter = find(vec.begin(), vec.end(), max_val);
    size_t index = distance(vec.begin(), iter);
    vec.erase(vec.begin() + index);
    int sum = std::accumulate(vec.begin(), vec.end(), 0) + (max_val / 2);
    cout << sum << endl;
}
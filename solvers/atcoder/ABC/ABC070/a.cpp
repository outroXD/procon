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
    string N; cin >> N;
    deque<char> S;
    rep (i, 0, N.size()) S.push_back(N[i]);
    while (true) {
        if (S.size() == 1) break;
        if (S.front() != S.back()) {
            cout << "No" << endl;
            return 0;
        }
        S.pop_front();
        S.pop_back();
    }
    cout << "Yes" << endl;
}
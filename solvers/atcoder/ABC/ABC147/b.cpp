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
    string S; cin >> S;

    int ans = 0;
    deque<char> deq;
    rep (i, 0, S.size()) deq.push_back(S[i]);
    while (deq.size() > 1) {
        if (deq.front() != deq.back()) ++ans;
        deq.pop_front();
        deq.pop_back();
    }

    cout << ans << endl;
}
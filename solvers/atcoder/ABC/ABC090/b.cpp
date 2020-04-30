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

bool is_palindromic(int n)
{
    string S = to_string(n);
    deque<char> deque;
    rep (i, 0, S.size()) deque.push_back(S[i]);
    while (deque.size() != 1) {
        if (deque.front() != deque.back()) return false;
        deque.pop_front();
        deque.pop_back();
    }
    return true;
}

int main()
{
    int A, B, ans = 0; cin >> A >> B;
    rrep (i, A, B) if (is_palindromic(i)) ans++;
    cout << ans << endl;
}
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

bool is_palindrome(string S, int start, int end)
{
    rep (i, 0, end) {
        if (S.at(i) != S.at(end-i)) return false;
    }
    return true;
}

int main()
{
    string S; cin >> S;
    int N = S.length();

    bool flg1 = is_palindrome(S, 0, N-1);
    bool flg2 = is_palindrome(S, 0, (N-1)/2-1);
    bool flg3 = is_palindrome(S, (N+3)/2-1, N-1);

    if (flg1 and flg2 and flg3) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
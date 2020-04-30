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
    vector<int> A_four, A_two, A_others;
    rep (i, 0, N) {
        int a; cin >> a;
        if (a % 4 == 0) A_four.push_back(a);
        else if (a % 2 == 0) A_two.push_back(a);
        else A_others.push_back(a);
    }

    if (!A_two.empty() and A_four.size() >= A_others.size())
        cout << "Yes" << endl;
    else if (A_two.empty() and A_four.size()+1 >= A_others.size())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
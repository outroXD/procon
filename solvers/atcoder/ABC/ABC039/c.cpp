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

bool check(string S, int i)
{
    if (S.at(i) == 'W' and S.at(i+1) == 'W')
        if (S.at(i+5) == 'W' and S.at(i+6) == 'B')
            return true;
    return false;
}

int main()
{
    string S; cin >> S;
    int cnt = 0;
    for (int i = 0; i < S.size(); ++i) {
        if (S.at(i) == 'W') ++cnt;
        if (check(S, i)) {
            if (cnt == 1) cout << "Mi" << endl;
            else if (cnt == 2) cout << "Re" << endl;
            else if (cnt == 3) cout << "Do" << endl;
            else if (cnt == 4) cout << "Si" << endl;
            else if (cnt == 5) cout << "La" << endl;
            else if (cnt == 6) cout << "So" << endl;
            else if (cnt == 7) cout << "Fa" << endl;
            return 0;
        }
    }
}
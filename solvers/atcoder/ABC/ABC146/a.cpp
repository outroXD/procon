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

    if (S == "SUN") cout << 7;
    else if (S == "MON") cout << 6;
    else if (S == "TUE") cout << 5;
    else if (S == "WED") cout << 4;
    else if (S == "THU") cout << 3;
    else if (S == "FRI") cout << 2;
    else if (S == "SAT") cout << 1;
    cout << endl;
}
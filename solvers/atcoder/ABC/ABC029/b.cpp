#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

bool is_r_exist(string str)
{
    for (char s : str) {
        if ('r' == s) return true;
    }
    return false;
}

int main()
{
    vector<string> S;
    rep (i, 0, 12) {
        string s; cin >> s;
        S.push_back(s);
    }

    int ans = 0;
    for (string str : S) {
        if (is_r_exist(str)) ++ans;
    }
    cout << ans << endl;
}
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main()
{
    int N, L; cin >> N >> L;
    vector<string> S(N);
    rep (i, 0, N) {
        string in; cin >> in;
        S.push_back(in);
    }

    sort(S.begin(), S.end());

    string ans = "";
    for (auto str : S) {
        ans += str;
    }
    cout << ans << endl;
}
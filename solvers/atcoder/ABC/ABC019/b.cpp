#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;

    string ans;
    char tmp = s[0];
    int cnt = 0;
    rrep(i, 0, s.size()) {
        if (tmp == s[i]) {
            ++cnt;
        } else if (tmp != s[i]) {
            ans.push_back(tmp);
            ans += to_string(cnt);
            cnt = 1;
            tmp = s[i];
        }
    }
    cout << ans << endl;
}
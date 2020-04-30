#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>

using namespace std;

int find(string str, char c)
{
    int ans = 0;
    rep(i, 0, str.size()) if (str[i] == c) ++ans;
    return ans;
}

int main()
{
    string A, B, C; cin >> A >> B >> C;

    if (find(A+B+C, '5') == 2 && find(A+B+C, '7')) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string S; cin >> S;

    string ans;
    for (int i = 0; i < S.size(); i++) {
        if (i == 0 && (S[i] >= 'a' && S[i] <= 'z'))
            ans.push_back(S[i] - 0x20);
        else if (i != 0 && S[i] >= 'A' && S[i] <= 'Z')
            ans.push_back(S[i] + 0x20);
        else
            ans.push_back(S[i]);
    }
    cout << ans << endl;
}
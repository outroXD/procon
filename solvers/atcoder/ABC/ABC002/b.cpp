#include<bits/stdc++.h>

using namespace std;

int main()
{
    string W; cin >> W;
    string vowels = "aiueo";

    string ans;
    for (int i = 0; i < W.size(); i++) {
        if ((int)vowels.find(W[i]) != -1) continue;
        else ans.push_back(W[i]);
    }
    cout << ans << endl;
}
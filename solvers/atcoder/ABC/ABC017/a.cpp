#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans;
    for (int i=0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        ans += s * (e/10);
    }
    cout << ans << endl;
}

#include <iostream>
#include <string>

using namespace std;

int ctoi(const char c){
    if('0' <= c && c <= '9') return (c-'0');
    return -1;
}

int main()
{
    string X; cin >> X;
    int ans = 0;
    for (int i = 0; i < X.size(); i++) {
        ans += ctoi(X[i]);
    }
    cout << ans << endl;
}
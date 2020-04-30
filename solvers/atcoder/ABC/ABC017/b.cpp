#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string X; cin >> X;

    for (int i = 0; i < X.size(); i++) {
        if (X[i] == 'c') {
            if (i == X.size()-1 || X[i+1] != 'h') {
                cout << "NO" << endl;
                return 0;
            } else {
                ++i;
                continue;
            }
        }
        if (X[i] == 'o' || X[i] == 'k' || X[i] == 'u') {
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
}
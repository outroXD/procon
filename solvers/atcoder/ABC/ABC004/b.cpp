#include <iostream>
#include <string>

using namespace std;

int main()
{
    string board[4][4];
    for (int i = 3; i >= 0; i--) {
        cin >> board[i][3] >> board[i][2] >> board[i][1] >> board[i][0];
    }
    for (int i = 0; i < 4; i++) {
        cout << board[i][0] << ' ' << board[i][1] << ' ' << board[i][2] << ' ' << board[i][3] << endl;
    }
}
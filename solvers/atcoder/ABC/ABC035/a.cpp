#include <iostream>

using namespace std;

int main()
{
    int W, H; cin >> W >> H;

    if ((W % 16 == 0) && (H % 9 == 0)) {
        cout << "16:9" << endl;
        return 0;
    }
    if ((W % 4 == 0) && (H % 3 == 0)) {
        cout << "4:3" << endl;
        return 0;
    }
}
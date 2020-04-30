#include <iostream>

using namespace std;

int main()
{
    int W, H; cin >> W >> H;
    cout << (W*3 == H*4 ? "4:3" : "16:9") << endl;
}
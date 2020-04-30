#include <iostream>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int diff = abs(a - b);
    cout << (diff > (10 - diff) ? (10 - diff) : diff) << endl;
}
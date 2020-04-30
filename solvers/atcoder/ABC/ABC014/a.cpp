#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int tmp = a%b;
    if (tmp == 0) {
        cout << 0 << endl;
    } else {
        cout << b-tmp << endl;
    }
}
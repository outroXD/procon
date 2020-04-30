#include <iostream>

using namespace std;

int main()
{
    int n, x; cin >> n >> x;

    cout << ((x-1 > n-x) ? n-x : x-1) << endl;
}
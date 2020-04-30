#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (1 <= N && N <= 11) {
        cout << N+1 << endl;
    } else {
        cout << 1 << endl;
    }
}

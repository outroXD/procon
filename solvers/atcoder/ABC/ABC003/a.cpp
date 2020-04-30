#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int res = 0;
    for (int i = 1; i <= N; ++i) {
        res += 10000 * i;
    }

    cout << res/N << endl;
}
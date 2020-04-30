#include <iostream>

using namespace std;

int main()
{
    int a, b, n; cin >> a >> b >> n;

    int ans = n;
    while (true) {
        if (ans % a == 0 && ans % b == 0 && ans >= n) {
            cout << ans << endl;
            break;
        }
        ans += 1;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int A, B; cin >> A >> B;

    int ans = 0;
    while (B > 0) {
        ++ans;
        B -= A;
    }
    cout << ans << endl;
}
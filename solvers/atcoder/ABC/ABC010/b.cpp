#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int num_petal; cin >> num_petal;
        while (true) {
            if (num_petal % 3 == 2) {
                num_petal -= 1;
                ans += 1;
                continue;
            }
            if (num_petal % 2 == 0) {
                num_petal -= 1;
                ans += 1;
                continue;
            }
            break;
        }
    }
    cout << ans << endl;
}
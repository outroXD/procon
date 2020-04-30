#include <iostream>

using namespace std;

int main()
{
    int A; cin >> A;

    int ans = 0;
    for (int i = 1; i <= A; i++) {
        for (int j = 1; j <= A; j++) {
            if (i+j == A) {
                if ((i*j) > ans) {
                    ans = i*j;
                }
            }
        }
    }
    cout << ans << endl;
}
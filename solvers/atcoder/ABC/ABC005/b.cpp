#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;
    int ans;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            cin >> ans;
            continue;
        }
        int second; cin >> second;
        if (ans > second) {
            ans = second;
        }
    }
    cout << ans << endl;
}
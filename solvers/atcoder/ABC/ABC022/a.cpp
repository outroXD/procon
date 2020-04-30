#include <iostream>

using namespace std;

int main()
{
    int N, S, T; cin >> N >> S >> T;
    int W; cin >> W;

    int weights[N];
    weights[0] = W;
    for (int i = 1; i < N; i++) {
        int dw; cin >> dw;
        weights[i] = weights[i-1] + dw;
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (S <= weights[i] && weights[i] <= T) ans++;
    }

    cout << ans << endl;
}
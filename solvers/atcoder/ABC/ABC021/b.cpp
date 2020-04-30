#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;
    int a, b; cin >> a >> b;
    int K; cin >> K;
    int towns[K];
    for (int i = 0; i < K; i++) {
        cin >> towns[i];
    }

    for (int i = 0; i < K; i++) {
        if (a == towns[i] || b == towns[i]) {
            cout << "NO" << endl;
            return 0;
        }
        for (int j = 0; j < K; j++) {
            if (j == i) continue;
            if (towns[j] == towns[i]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
}
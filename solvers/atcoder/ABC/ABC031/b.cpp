#include <iostream>

using namespace std;

int main()
{
    int L, H; cin >> L >> H;
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        int time; cin >> time;
        if (L >= time) {
            cout << L - time << endl;
            continue;
        }
        if (L <= time && time <= H) {
            cout << 0 << endl;
            continue;
        }
        if (H <= time) {
            cout << -1 << endl;
            continue;
        }
    }
}
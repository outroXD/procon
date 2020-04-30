#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define rrrep(i, a, b) for (int i = a; i >= b; i--)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M; cin >> N >> M;

    rrep (c, 0, N) {
        int a = -M + 3*N + c;
        int b = M - 2*N - 2*c;

        if (a >= 0 && b >= 0) {
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
    }
    cout << "-1 -1 -1" << endl;
}
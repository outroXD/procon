#include <iostream>
#include <cmath>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main()
{
    int N; cin >> N;

    float bugs = 0;
    int nums = 0;
    rep(i, N) {
        int a; cin >> a;
        if (a == 0) continue;
        bugs += a;
        ++nums;
    }

    cout << ceil(bugs / nums) << endl;
}
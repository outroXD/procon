#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, X; cin >> n >> X;
    vector<int> vec;
    vec.reserve(n);
    rep(i, n) cin >> vec[i];

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        // 1. (1 << i) : 第i番目のビットだけが立っているビット列を生成
        // 2. & (論理積・AND)でビットが立っているかを確認
        if ((1 << i) & X) ans += vec[i];
    }
    cout << ans << endl;
}
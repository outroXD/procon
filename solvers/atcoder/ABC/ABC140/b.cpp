#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> A, B, C;
    A.reserve(N); B.reserve(N); C.reserve(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N-1) cin >> C[i];

    int ans = 0;
    rep(i, N) {
        ans += B[A[i]-1];
        if (i == 0) continue;
        if (A[i-1]+1 == A[i]) ans += C[A[i-1]-1];
    }

    cout << ans << endl;
}
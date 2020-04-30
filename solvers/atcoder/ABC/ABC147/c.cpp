#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int counter(int x) {
    if(x == 0) return 0;
    return counter(x >> 1) + (x & 1);
}

int main() {
    int N;
    int A[20];
    int x[20][20];
    int y[20][20];

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        for(int j = 0; j < A[i]; j++) {
            cin >> x[i][j] >> y[i][j];
        }
    }

    int ans = 0;
    for (int bits = 0; bits < (1 << N); bits++) {
        bool ok = true;
        for (int i = 0; i <= N; i++) {
            if (!(bits & (1 << i))) continue;
            for (int j = 0; j < A[i]; j++) {
                if (((bits >> (x[i][j]-1)) & 1) ^ y[i][j]) ok = false;
            }
        }
        if (ok) ans = max(ans, counter(bits));
    }
    cout << ans << endl;
}
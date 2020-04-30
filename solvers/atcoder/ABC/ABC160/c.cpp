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

int main()
{
    int K, N; cin >> K >> N;
    vector<int> A(N);
    rep (i, 0, N) cin >> A[i];

    vector<int> dist;
    rrep (i, 1, N) {
        if (i == N) {
            dist.push_back(abs(K-A[i-1])+A[0]);
            break;
        }
        dist.push_back(abs(A[i-1]-A[i]));
    }

    int max_size = *max_element(dist.begin(), dist.end());

    cout << K - max_size << endl;
}
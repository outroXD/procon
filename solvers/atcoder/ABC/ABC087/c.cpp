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

int N;
vector<vector<int>> A(2);

int dfs(int x, int y, int ans)
{
    if (x > N-1 or y >= 2) return 0;
    if (x == N-1 and y == 1) return ans+A[y][x];
    return max(dfs(x+1, y, ans+A[y][x]),
               dfs(x, y+1, ans+A[y][x]));
}

int main()
{
    cin >> N;
    rep (i, 0, 2) {
        rep (j, 0, N) {
            int in; cin >> in;
            A[i].push_back(in);
        }
    }

    cout << dfs(0, 0, 0) << endl;
}
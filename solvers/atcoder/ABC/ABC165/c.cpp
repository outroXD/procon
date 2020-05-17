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
#define each(i, map) for (auto& i : map)

int N, M, Q;
vector<int> a, b, c, d;
vector<int> A(11, 0);
int ans = 0;

int get_score()
{
    int score = 0;
    for (int i = 0; i < Q; i++) {
        if (A[b[i]] - A[a[i]] == c[i]) {
            score += d[i];
        }
    }
    return score;
}

void dfs(int cnt)
{
    if (cnt == N) {
        ans = max(ans, get_score());
        return;
    }

    for (int i = min(A[cnt], M); i <= M; ++i) {
        A[cnt+1] = i;
        dfs(cnt+1);
    }
}

int main()
{
    cin >> N >> M >> Q;
    a.resize(Q); b.resize(Q); c.resize(Q); d.resize(Q);
    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    A[0] = 1;
    dfs(0);
    cout << ans << endl;
}

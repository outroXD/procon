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

/**
 * AC Imos法
 */
int main()
{
    int N, M, total = 0; cin >> N >> M;
    vector<int> l(N), r(N), s(N), imos(M+2, 0);
    rep (i, 0, N) {
        cin >> l[i];
        cin >> r[i];
        cin >> s[i];
        total += s[i];
        imos[l[i]] += s[i];
        imos[r[i]+1] += -s[i];
    }

    int v_min = INF;
    rep (i, 1, M+1) {
        imos[i] += imos[i-1];
        v_min = min(v_min, imos[i]);
    }

    cout << total - v_min << endl;
}

/**
 * 部分点解法(100点)
 * O(NM)
 */
int main_100()
{
    int N, M; cin >> N >> M;
    vector<int> l(N), r(N), s(N);
    rep (i, 0, N) {
        cin >> l[i]; --l[i];
        cin >> r[i]; --r[i];
        cin >> s[i];
    }

    int ans = 0;
    rep (m, 0, M) {
        int score = 0;
        rep (i, 0, N) {
            if (l[i] <= m and m <= r[i]) continue;
            else score += s[i];
        }
        ans = max(ans, score);
    }

    cout << ans << endl;
}

/**
 * 部分点解法(30点)
 */
int main_30()
{
    int N, M; cin >> N >> M;
    vector<int> l(N), r(N), s(N);
    rep (i, 0, N) {
        cin >> l[i]; --l[i];
        cin >> r[i]; --r[i];
        cin >> s[i];
    }

    int ans = 0;
    rep (bit, 0, (1 << N)) {
        int score = 0;
        vector<bool> flg(M, false);
        rep (i, 0, N) {
            if (bit & (1 << i)) {
                rrep (j, l[i], r[i]) {
                    flg[j] = true;
                }
                score += s[i];
            }
        }

        auto iter = find(flg.begin(), flg.end(), false);
        size_t idx = distance(flg.begin(), iter);
        if (idx != flg.size()) {
            ans = max(ans, score);
        }
    }

    cout << ans << endl;
}
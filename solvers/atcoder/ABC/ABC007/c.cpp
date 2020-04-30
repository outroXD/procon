#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;
using Graph = vector<vector<int>>;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

const pair<int, int> delta[4] = {make_pair(1, 0),
                                 make_pair(0, 1),
                                 make_pair(-1, 0),
                                 make_pair(0, -1)};

int main()
{
    int R, C; cin >> R >> C;
    int sy, sx; cin >> sy >> sx;
    sy -= 1; sx -= 1;
    int gy, gx; cin >> gy >> gx;
    gy -= 1; gx -= 1;
    vector<string> field(R);
    rep (i, 0, R) {
        cin >> field[i];
    }

    Graph dist(R, vector<int>(C, -1));
    queue<pair<int, int>> que;
    dist[sy][sx] = 0;
    que.push(make_pair(sx, sy));

    while (!que.empty()) {
        pair<int, int> current_pos = que.front();
        int current_x = current_pos.first;
        int current_y = current_pos.second;
        que.pop();

        for (int direction = 0; direction < 4; ++direction) {
            int next_x = current_x + delta[direction].first;
            int next_y = current_y + delta[direction].second;

            if (next_x < 0 or next_x >= R or next_y < 0 or next_y >= C) continue;
            if (field[next_x][next_y] == '#') continue;

            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[current_x][current_y] + 1;
            }
        }
    }

    cout << dist[gy][gx] << endl;
}
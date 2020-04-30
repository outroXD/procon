#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define revrep(i, s) for (int i = s-1; i > 0; i--)
#define revrrep(i, s) for (int i = s-1; i >= 0; i--)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

long long distance(pair<long long, long long> student, pair<long long, long long> check_point)
{
    return abs(student.first - check_point.first) + abs(student.second - check_point.second);
}

int main()
{
    int N, M; cin >> N >> M;
    vector<pair<long long, long long>> AB, CD;
    rep (i, 0, N) {
        long long a, b; cin >> a >> b;
        AB.push_back(make_pair(a, b));
    }
    rep (i, 0, M) {
        long long c, d; cin >> c >> d;
        CD.push_back(make_pair(c, d));
    }

    rep (i, 0, N) {
        long long min_distance = distance(AB[i], CD[0]);
        int index = 1;
        rep (j, 1, M) {
            long long current_distance = distance(AB[i], CD[j]);
            if (min_distance > current_distance) {
                index = j+1;
                min_distance = current_distance;
            }
        }
        cout << index << endl;
    }
}
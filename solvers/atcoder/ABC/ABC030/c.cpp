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
 * AC(参考)
 */
int main()
{
    int N, M; cin >> N >> M;
    int X, Y; cin >> X >> Y;
    vector<long long> a(N), b(M);
    rep (i, 0, N) cin >> a[i];
    rep (i, 0, M) cin >> b[i];

    long long ans = 0, current_time = 0;
    bool is_a = true;
    while (true) {
        auto p = (is_a ? &a : &b);
        auto itr = lower_bound((*p).begin(), (*p).end(), current_time);

        if (itr == (*p).end()) break;

        current_time = *itr + (is_a ? X : Y);
        ++ans;
        is_a = !is_a;
    }

    cout << ans / 2 << endl;
}

/**
 * AC
 */
long long get_next(const vector<long long> &vec, const long long &current_time)
{
    auto iter = lower_bound(vec.begin(), vec.end(), current_time);
    if (iter != vec.end()) {
        long long pos = distance(vec.begin(), iter);
        return vec[pos];
    }
    else
        return -1;
}

int main()
{
    int N, M; cin >> N >> M;
    int X, Y; cin >> X >> Y;
    vector<long long> a(N), b(M);
    rep (i, 0, N) cin >> a[i];
    rep (i, 0, M) cin >> b[i];

    long long ans = 0, cnt = 0, current_time = 0;
    while (true) {
        if (cnt != 0 and cnt % 2 == 0) ++ans;

        long long next = -1;
        if (cnt % 2 == 0) next = get_next(a, current_time);
        else next = get_next(b, current_time);

        if (next == -1) {
            cout << ans << endl;
            return 0;
        }

        current_time = next;
        if (cnt % 2 == 0) current_time += X;
        else current_time += Y;
        ++cnt;
    }
}

/**
 * dequeを使った全探索。
 * 各空港から出発する時間を1度全て確認してしまう。
 */
//int get_next(deque<int> deq, const long long &current_time)
//{
//    int next = -1;
//    while (true) {
//        if (deq.empty()) return -1;
//        if (current_time > deq.front())
//            deq.pop_front();
//        else {
//            next = deq.front();
//            deq.pop_front();
//            return next;
//        }
//    }
//}
//
//int main()
//{
//    int N, M; cin >> N >> M;
//    int X, Y; cin >> X >> Y;
//    deque<int> a, b;
//    rep (i, 0, N) {
//        int in; cin >> in;
//        a.push_back(in);
//    }
//    rep (i, 0, M) {
//        int in; cin >> in;
//        b.push_back(in);
//    }
//
//    long long ans = 0, cnt = 0, current_time = 0;
//    while (true) {
//        if (cnt != 0 and cnt % 2 == 0) ++ans;
//
//        int next;
//        if (cnt % 2 == 0) next = get_next(a, current_time);
//        else next = get_next(b, current_time);
//
//        if (next == -1) {
//            cout << ans << endl;
//            return 0;
//        }
//
//        current_time = next;
//        if (cnt % 2 == 0) current_time += X;
//        else current_time += Y;
//        ++cnt;
//    }
//}
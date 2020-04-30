#include "bits/stdc++.h"

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

bool ac_flg = false;

int count_ac(vector<string> &vec)
{
    for (const auto& s : vec) {
        if (s == "AC") {
            ac_flg = true;
            return 1;
        }
    }
    return 0;
}

int count_wa(vector<string> &vec)
{
    if (ac_flg) {
        int wa_cnt = 0;
        for (const auto& s : vec) {
            if (s == "AC") return wa_cnt;
            ++wa_cnt;
        }
        return wa_cnt;
    }
    return 0;
}

int main()
{
    int N, M; cin >> N >> M;
    map<int, vector<string>> map;
    rep (i, 0, M) {
        int p;
        string S;
        cin >> p >> S;
        map[p].push_back(S);
    }

    int ac_cnt = 0, wa_cnt = 0;
    for (auto mp : map) {
        ac_flg = false;
        ac_cnt += count_ac(mp.second);
        wa_cnt += count_wa(mp.second);
    }

    cout << ac_cnt << " " << wa_cnt << endl;
}

//int N, M;
//int WA[105000];
//bool AC[105000];
//
//void solve()
//{
//    cin >> N >> M;
//    int WAnum = 0;
//    int ACnum = 0;
//    for (int i = 1; i <= N; i++) {
//        WA[i] = 0;
//        AC[i] = false;
//    }
//
//    while (M--) {
//        int p;
//        string S;
//        cin >> p >> S;
//
//        if (AC[p]) continue;
//        if (S == "AC") {
//            AC[p] = true;
//            ++ACnum;
//            WAnum += WA[p];
//        }
//        else if (S == "WA") {
//            ++WA[p];
//        }
//    }
//
//    cout << ACnum << " " << WAnum << endl;
//}
//
//int main()
//{
//    solve();
//}

/*
 * 不正解
 */
//long long count_ac(vector<string> &vec)
//{
//    for (const auto& s : vec) {
//        if (s == "AC") return 1;
//    }
//    return 0;
//}
//
//long long count_wc(vector<string> &vec)
//{
//    long long wc_cnt = 0;
//    for (const auto& s : vec) {
//        if (s == "WA")
//            ++wc_cnt;
//        else if (s == "AC")
//            return wc_cnt;
//    }
//    return wc_cnt;
//}
//
//int main()
//{
//    long long N, M; cin >> N >> M;
//    map<long long, vector<string>> map;
//    for (long long i = 0; i < M; i++) {
//        long long p; string S;
//        cin >> p >> S;
//        map[p].push_back(S);
//    }
//
//    long long cnt_ac = 0, cnt_wc = 0;
//    for (auto mp : map) {
//        cnt_ac += count_ac(mp.second);
//        cnt_wc += count_wc(mp.second);
//    }
//
//    cout << cnt_ac << " " << cnt_wc << endl;
//}
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

int main()
{
    string S; cin >> S;

    map<long long, long long> map;
    map[0] = 1;

    reverse(S.begin(), S.end());

    long long now = 0, ten = 1;
    each (e, S) {
        now = (now + (e - '0') * ten) % 2019;
        ten *= 10;
        ten %= 2019;
        map[now]++;
    }

    long long ans = 0;
    each (e, map) {
        ans += e.second * (e.second - 1) / 2;
    }

    cout << ans << endl;
}

//int main()
//{
//    string S; cin >> S;
//
//    int N = S.size();
//    vector<long long> val(2019, 0);
//    long long fac = 1;
//    long long cur = 0;
//
//    val[cur]++;
//    for (int i = 0; i < N; ++i) {
//        long long add = S[N - 1 - i] - '0';
//        cur = (cur + fac * add) % 2019;
//        fac = (fac * 10) % 2019;
//        val[cur]++;
//    }
//
//    long long res = 0;
//    for (int i = 0; i < val.size(); ++i) {
//        res += val[i] * (val[i] - 1) / 2;
//    }
//
//    cout << res << endl;
//}
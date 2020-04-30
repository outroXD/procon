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
    int N; cin >> N;
    map<string, vector<int>> A = {
            {"gray", {}},
            {"brown", {}},
            {"green", {}},
            {"l_blue", {}},
            {"blue", {}},
            {"yellow", {}},
            {"orange", {}},
            {"red", {}},
            {"other", {}}
    };

    rep (i, 0, N) {
        int a; cin >> a;
        if (1 <= a and a <= 399) A["gray"].push_back(a);
        else if (400 <= a and a <= 799) A["brown"].push_back(a);
        else if (800 <= a and a <= 1199) A["green"].push_back(a);
        else if (1200 <= a and a <= 1599) A["l_blue"].push_back(a);
        else if (1600 <= a and a <= 1999) A["blue"].push_back(a);
        else if (2000 <= a and a <= 2399) A["yellow"].push_back(a);
        else if (2400 <= a and a <= 2799) A["orange"].push_back(a);
        else if (2800 <= a and a <= 3199) A["red"].push_back(a);
        else A["other"].push_back(a);
    }

    int used_space = 0, space = 0;
    for (auto& a : A) {
        if (a.first == "other") continue;
        if (a.second.size() != 0) ++used_space;
        else ++space;
    }

    int min = 0, max = 0;
    if (A["other"].size() != 0) {
        max = used_space + A["other"].size();
        if (used_space == 0) ++used_space;
        min = used_space;
    }
    else {
        if (used_space == 0) {
            ++used_space;
            max = used_space;
            min = used_space;
        }
        else {
            min = used_space;
            max = used_space;
        }
    }

    cout << min << " " << max << endl;
}
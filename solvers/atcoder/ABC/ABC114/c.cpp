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

vector<string> vals;
long long N;
string NS;
int N_size;

void rec(const string& val)
{
    if (N_size < val.size()) return;
    if (!val.empty()) vals.push_back(val);
    rec(val+'7');
    rec(val+'5');
    rec(val+'3');
}

bool is_ans(const string& val)
{
    if (val.size() < 3) return false;
    bool flag_7 = false, flag_5 = false, flag_3 = false;
    for (auto c : val) {
        if (c == '7') flag_7 = true;
        if (c == '5') flag_5 = true;
        if (c == '3') flag_3 = true;
    }
    if (!flag_7 or !flag_5 or !flag_3) return false;
    return stoll(val) <= N;
}

int main()
{
    cin >> NS;
    N = stoll(NS);
    N_size = NS.size();

    rec("");

    long long ans = 0;
    for (const auto& val : vals) {
        if (is_ans(val)) ++ans;
    }
    cout << ans << endl;
}
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

string result = "";

bool dfs(string num, int ret, string data)
{
    if (num.empty() or 7 < ret) return false;
    if (ret == 7) {
        result = data.substr(0, data.size()-1);
        return true;
    }
}

int main()
{
    string N; cin >> N;
    dfs(N, 0, "");
    cout << "ans" << endl;
}
//string calc = "";
//
//bool dfs(int num, int ret, string data)
//{
//    if (num == 0 and ret != 7) return false;
//    if (ret == 7) {
//        calc = data.substr(0, data.size()-1);
//        return true;
//    }
//    if (dfs(num/10, ret + (num % 10), data + "+")) return true;
//    if (dfs(num/10, ret - (num % 10), data + "-")) return true;
//}
//
//int main()
//{
//    int N; cin >> N;
//    dfs(N, 0, "");
//    cout << "ans" << endl;
//}
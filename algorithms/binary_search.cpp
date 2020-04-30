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
    vector<int> a = {1, 4, 4, 7, 7, 8, 8, 11, 13, 19};
    sort(a.begin(), a.end());
    auto iter_upper = upper_bound(all(a), 4);
    cout << "4の次に大きい要素の値を出力 : " << *iter_upper << endl;
    cout << "4以下の数字の個数を出力     : " << iter_upper - a.begin() << endl;

    auto iter_lower = lower_bound(all(a), 11);
    cout << "11以上の内、一番左側のイテレータを返却する : " << *iter_lower << endl;
}
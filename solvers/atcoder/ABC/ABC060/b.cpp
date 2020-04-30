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

int main()
{
    long long A, B, C; cin >> A >> B >> C;
    rrep (i, 0, A) {
        // (A, 2A, 3A, ... kA)の数列から任意の値を取り出し、足し合わせた値をtotalとする
        // iをイテレーションで回す変数とすると i*B+C = total が条件 これを式変形して
        // (i*B+C) mod total = 0
        if ((i*B+C)%A == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
#include <iostream>
#include <vector>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N; cin >> N;
    string ans[N][N];
    for (int i = N-1; i >= 0; i--) {
        string str; cin >> str;
        for (int j = 0; j < str.size(); ++j) {
            ans[j][i] = str[j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}
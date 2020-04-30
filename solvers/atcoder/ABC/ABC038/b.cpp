#include <iostream>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int H1, W1, H2, W2;
    cin >> H1 >> W1 >> H2 >> W2;

    if ((H1 == H2) or (H1 == W2) or (W1 == H2) or (W1 == W2)) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
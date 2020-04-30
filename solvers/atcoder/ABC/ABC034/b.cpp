#include <iostream>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int n; cin >> n;
    if (n%2 == 0) cout << n-1 << endl;
    else cout << n+1 << endl;
}
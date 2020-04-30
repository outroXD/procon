#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int X, Y; cin >> X >> Y;

    cout << X + (0.5 * Y) << endl;
}
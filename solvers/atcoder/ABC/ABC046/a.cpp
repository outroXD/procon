#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> set;
    rep(i, 0, 3) {
        int in; cin >> in;
        set.insert(in);
    }
    cout << set.size() << endl;
}
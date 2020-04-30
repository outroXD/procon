#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int inputs[3];
    rep(i, 0, 3) {
        cin >> inputs[i];
    }
    sort(inputs, inputs+3, greater<int>());

    if (inputs[0] == inputs[1] + inputs[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
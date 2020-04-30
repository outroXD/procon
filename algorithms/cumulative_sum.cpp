#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> in = {1, 6, 3, 8, 4, 2, 9, 5, 7};
    vector<int> cum(in.size()+10, 0);
    for (int i = 0; i < in.size(); ++i) cum[i+1] = in[i] + cum[i];
    // Aの2番目(3)から6番目(9)までの数の和を合計
    cout << cum[7] - cum[2] << endl;
}
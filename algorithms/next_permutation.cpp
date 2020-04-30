#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4};
    do {
        for (int i = 0; i < 5; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
}
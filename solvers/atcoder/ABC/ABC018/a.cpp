#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int before[3], after[3];
    for (int i=0; i < 3; i++) {
        int in;
        cin >> in;
        before[i] = in;
        after[i] = in;
    }

    sort(after, after+3, greater<int>());

    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            if (before[i] == after[j])
                cout << j+1 << endl;
        }
    }
}
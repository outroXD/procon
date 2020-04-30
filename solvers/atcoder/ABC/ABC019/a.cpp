#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int inputs[3];
    for (int i=0; i < 3; i++) {
        int in;
        cin >> in;
        inputs[i] = in;
    }

    sort(inputs, inputs+3, greater<int>());
    cout << inputs[1] << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N; cin >> N;

    vector<int> values;
    for (int i = 0; i < N; i++) {
        int value; cin >> value;
        values.push_back(value);
    }
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());

    cout << values[values.size()-2] << endl;
}
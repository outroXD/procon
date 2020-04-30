#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string S; cin >> S;
    int N; cin >> N;

    vector<string> names;
    for (int i = 0; i < S.size(); i++) {
        for (int j = 0; j < S.size(); j++) {
            string name = S.substr(i, 1) + S.substr(j, 1);
            names.push_back(name);
        }
    }

    std::sort(names.begin(), names.end());
    cout << names[N-1] << endl;
}
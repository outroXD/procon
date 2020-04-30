#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N; cin >> N;

    map<string, int> names;
    for (int i = 0; i < N; i++) {
        string name; cin >> name;
        names[name] = names[name] + 1;
    }

    string ans_name = "";
    int ans_val = 0;
    for (std::map<string, int>::iterator iter = names.begin(); iter != names.end(); iter++) {
        if (iter->second > ans_val) {
            ans_name = iter->first;
            ans_val = iter->second;
        }
    }
    cout << ans_name << endl;
}

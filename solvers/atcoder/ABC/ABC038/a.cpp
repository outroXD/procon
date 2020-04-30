#include <string>
#include <iostream>

using namespace std;

int main()
{
    string S; cin >> S;

    if (S.substr(S.size()-1, S.size()) == "T") cout << "YES" << endl;
    else cout << "NO" << endl;
}
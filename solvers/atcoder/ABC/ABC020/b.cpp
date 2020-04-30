#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>

using namespace std;

int main()
{
    string A, B; cin >> A >> B;

    cout << stoi(A+B)*2 << endl;
}
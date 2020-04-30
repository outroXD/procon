#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N; cin >> N;
    for (int i = 1; i < N.size(); i++) {
        if (N[i] != N[i-1]) {
            cout << "DIFFERENT" << endl;
            return 0;
        }
    }
    cout << "SAME" << endl;
}
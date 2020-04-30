#include <iostream>

using namespace std;

int main()
{
    int A, D; cin >> A >> D;

    cout << ((A+1)*D > (D+1)*A ? (A+1)*D : (D+1)*A) << endl;
}
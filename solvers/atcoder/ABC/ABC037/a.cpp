#include <iostream>

using namespace std;

int main()
{
    int A, B, C; cin >> A >> B >> C;

    cout << C / min(A, B) << endl;
}
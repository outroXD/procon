#include <iostream>

using namespace std;

int main()
{
    int A, B, C; cin >> A >> B >> C;

    if ((A+B == C) && (A-B != C)) cout << "+" << endl;
    if ((A+B == C) && (A-B == C)) cout << "?" << endl;
    if ((A+B != C) && (A-B == C)) cout << "-" << endl;
    if ((A+B != C) && (A-B != C)) cout << "!" << endl;
}
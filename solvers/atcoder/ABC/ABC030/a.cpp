#include <iostream>

using namespace std;

int main()
{
    float A, B, C, D; cin >> A >> B >> C >> D;

    if ((B/A) > (D/C)) cout << "TAKAHASHI" << endl;
    else if ((B/A) < (D/C)) cout << "AOKI" << endl;
    else if ((B/A) == (D/C)) cout << "DRAW" << endl;
}
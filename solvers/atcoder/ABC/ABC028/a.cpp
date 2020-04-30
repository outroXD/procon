#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;

    if (N <= 59) cout << "Bad" << endl;
    if (60 <= N && N <= 89) cout << "Good" << endl;
    if (90 <= N && N <= 99) cout << "Great" << endl;
    if (N == 100) cout << "Perfect" << endl;
}
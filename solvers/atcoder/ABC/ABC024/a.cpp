#include <iostream>

using namespace std;

int main()
{
    int A, B, C, K; cin >> A >> B >> C >> K;
    int S, T; cin >> S >> T;

    int total = 0;
    total += A*S;
    total += B*T;
    if ((S+T) >= K) total -= (S+T)*C;

    cout << total << endl;
}
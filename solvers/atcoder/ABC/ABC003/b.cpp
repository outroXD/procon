#include <string>
#include <iostream>

using namespace std;

int main()
{
    string S, T; cin >> S >> T;
    string atcards = "atcoder";

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == T[i]) {
            continue;
        }
        if (S[i] == '@' && atcards.find(T[i]) == -1) {
            cout << "You will lose" << endl;
            return 0;
        }
        if (T[i] == '@' && atcards.find(S[i]) == -1) {
            cout << "You will lose" << endl;
            return 0;
        }
        if (S[i] != T[i] && S[i] != '@' && T[i] != '@') {
            cout << "You will lose" << endl;
            return 0;
        }
    }
    cout << "You can win" << endl;
}
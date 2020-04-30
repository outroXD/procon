#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, B; string op;
    cin >> A >> op >> B;

    if (op == "+") cout << A+B << endl;
    else cout << A-B << endl;
}
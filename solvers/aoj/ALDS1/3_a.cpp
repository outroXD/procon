#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

bool is_operand(string c)
{
    return c == "+" or c == "-" or c == "*";
}

int calc(stack<int> &stack, string operand)
{
    int ret = stack.top();
    stack.pop();
    if (operand == "+") ret += stack.top();
    else if (operand == "-") ret -= stack.top();
    else if (operand == "*") ret *= stack.top();
    stack.pop();
    return ret;
}

int main()
{
    string c;
    stack<int> stack;
    while (cin >> c) {
        if (is_operand(c))
            stack.push(calc(stack, c));
        else if (c == " ")
            continue;
        else {
            stack.push(stoi(c));
        }
    }
    cout << stack.top() << endl;
}

#include <iostream>

using namespace std;

int next_l(int d)
{
    if (d == 9)
        return 0;
    else
        return d + 1;
}

int distance_L(int a, int b)
{
    int ans = 0;
    while (a != b) {
        ++ans;
        a = next_l(a);
    }
    return ans;
}

int next_r(int d)
{
    if (d == 0)
        return 9;
    else
        return d - 1;
}

int distance_R(int a, int b)
{
    int ans = 0;
    while (a != b) {
        ++ans;
        a = next_r(a);
    }
    return ans;
}

int main()
{
    int a, b; cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return 0;
    }

    int l = distance_L(a, b);
    int r = distance_R(a, b);

    cout << ((l > r) ? r : l) << endl;
}
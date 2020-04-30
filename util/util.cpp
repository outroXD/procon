#include <cmath>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)

const double PI=acos(-1.0);

int ctoi(const char c)
{
    if('0' <= c && c <= '9') return (c-'0');
    return -1;
}

long combination(int n, int r = 2)
{
    long num = 1;
    rrep (i, 1, r) num = num * (n - i + 1) / i;
    return num;
}
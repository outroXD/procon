#include <bits/stdc++.h>
#include <time.h>

typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))
#define each(i, map) for (auto& i : map)

int fib1(int n)
{
    if (n <= 1) return 1;
    else fib1(n-1) + fib1(n-2);
}

/**
 * 計算結果をmemoに記録しながら計算していく。
 */
map<int, int> memo;
int fib2(int n)
{
    if (n <= 1)
        return 1;
    else {
        if (memo.find(n) != memo.end()) {
            return memo[n];
        } else {
            memo[n] = fib2(n-1) + fib2(n-2);
        }
    }
}

int fib3(int n)
{
    if (n == 0)
        return 1;
    else {
        int f1 = 1, f2 = 1, f3 = 1;
        rep (i, 0, n) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f2;
    }
}

int main()
{
    clock_t start = clock();
    fib1(30);
    clock_t end = clock();
    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time fib1 %lf[ms]\n", time);

    start = clock();
    fib2(30);
    end = clock();
    time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time fib2 %lf[ms]\n", time);

    start = clock();
    fib3(30);
    end = clock();
    time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time fib2 %lf[ms]\n", time);
}
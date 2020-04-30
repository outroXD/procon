#include <iostream>

using namespace std;

/**
 * 拡張ユークリッドの互除法
 * 引数として互いに素な2数a, mについてax=by=1を満たす(x,y)を求める。
 * @tparam T
 * @param a
 * @param m
 * @return
 */
template <typename T>
T modinv(T a, T m)
{
    T b = m, u = 1, v = 0;
    while (b) {
        T t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}
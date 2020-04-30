#include <iostream>

using namespace std;

/**
 * 引数xが素数かどうかを判定する.
 * @tparam T
 * @param x
 * @return true: xは素数
 *         false: xは素数ではない
 */
template<typename T>
bool is_prime(T x)
{
    if (x <= 1)
        return false;
    for (T i = 2; i*i <= x; i++) {
        if (x%i == 0)
            return false;
    }
    return true;
}
#include <iostream>
#include <map>

using namespace std;

/**
 * 素因数を列挙して返却する。
 * N:4 → { 2, 2 }
 * @param num
 * @return
 */
map<int64_t, int64_t> get_factors(int64_t num)
{
    map<int64_t, int64_t> factors;
    while (num % 2 == 0) {
        ++factors[2];
        num /= 2;
    }
    for (int64_t i = 3; i <= num; i++) {
        while (num % i == 0) {
            ++factors[i];
            num /= i;
        }
    }
    return factors;
}
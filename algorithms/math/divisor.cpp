#include <bits/stdc++.h>

/**
 * 引数numの約数を列挙して返却する
 * @param num 自然数
 * @return 約数
 */
std::vector<int64_t> divisor(int64_t num)
{
    std::vector<int64_t> result;
    for (int64_t i = 1; i*i <= num; i++) {
        if (num % i == 0) {
            result.push_back(i);
            if (i*i != num) result.push_back(num / i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
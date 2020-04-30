#include <iostream>
using namespace std;

// ax + by = gcd(a, b) となるような (x, y) を求める
// 多くの場合 a と b は互いに素として ax + by = 1 となる (x, y) を求める
//long long extGCD(long long a, long long b, long long &x, long long &y) {
//    if (b == 0) {
//        x = 1;
//        y = 0;
//        return a;
//    }
//    long long d = extGCD(b, a%b, y, x);
//    y -= a / b * x;
//    return d;
//}

long long extGCD(long long a, long long b, long long &x, long long &y) {
    if (b > 0) {
        int g = extGCD(b, a%b, x, y);
        int prex = x;
        x = y;
        y = prex - (a / b) * x;
    } else {
        x = 1;
        y = 0;
        return a;
    }
}

// 負の数にも対応した mod (a = -11 とかでも OK)
inline long long mod(long long a, long long m) {
    return (a % m + m) % m;
}

// 逆元計算
// a, bが互いに素であること
long long modinv(long long a, long long m) {
    long long x, y;
    extGCD(a, m, x, y);
    return mod(x, m); // 気持ち的には x % m だが、x が負かもしれないので
}

int main() {
    // 例：13を法とした5の逆元を計算する
    cout << modinv(5, 13) << endl;
}
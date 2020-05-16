#include <iostream>

using namespace std;

int main()
{
    long long num1 = 111111111;
    long long num2 = 123456789;
    long long num3 = 987654321;

    long long mod = 1000000007;

    cout << "掛け算の途中でMODを取る" << endl;
    cout << "1: ";
    long long ans_mul1=  (num1 * num2 % mod) * num3 % mod;
    cout << ans_mul1 << endl;
    cout << "2(オーバーフローにより誤り): ";
    long long ans_mul2 = (num1 * num2 * num3) % mod;
    cout << ans_mul2 << endl;
    if (ans_mul1 != ans_mul2)
        cout << "掛け算はオーバーフローの恐れがある為、掛ける度にMODを取る方が無難。" << endl;

    cout << endl;
    cout << "足し算の途中でMODを取る" << endl;
    cout << "1: ";
    long long ans1 =  (((num1 + num2) % mod) + num3) % mod;
    cout << ans1 << endl;
    cout << "2: ";
    long long ans2 = (num1 + num2 + num3) % mod;
    cout << ans2 << endl;
    if (ans1 == ans2)
        cout << "足し算の度にMODを取っても答えは同じ。" << endl;

    cout << endl;
    cout << "10^を割る実験。" << endl;
    long long ten = 1;
    for (long long i = 0; i < 10; i++) {
        cout << ten << " : ";
        cout << ten % 2019 << endl;
        ten *= 10;
    }
}